#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
//<iomanip> setprecision()

main(){
    system("chcp 1250>>null");
    cout<<"Program oblicza e^x z pewnym przbli¿eniem."<<endl;
    cout<<"Dane:"<<endl;
    float n, x, skl, s;
    cout<<"Podaj n: ";
    cin>>n;
    cout<<"Podaj x: ";
    cin>>x;
    skl=1;
    s=0;

    for(int i=0; i<=n; i++){
        s+=skl;
        skl=skl*x/(i+1);
    }
    cout<<"Wyniki:"<<endl;
    cout<<"s = "<<s<<endl;
    cout<<"exp(x) = "<<exp(x)<<endl;
    cout<<"fabs(exp(x)-s) = "<<fabs(exp(x)-s)<<endl;
}
