#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program znajduje s�siaduj�ce pary liczb dodatnich."<<endl;
    int n, a, b;
    cout<<"Podaj n: ";
    cin>>n;
    cout<<"Podaj liczb�: ";
    cin>>a;
    for(int i=0; i<n-1; i++){
        cout<<"Podaj liczb�: ";
        cin>>b;
        if(a*b>0) cout<<"S�siaduj�ca para: ("<<a<<", "<<b<<")  "<<endl;
        a=b;
    }
}
