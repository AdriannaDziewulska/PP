#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program znajduje s¹siaduj¹ce pary liczb dodatnich."<<endl;
    int n, a, b;
    cout<<"Podaj n: ";
    cin>>n;
    cout<<"Podaj liczbê: ";
    cin>>a;
    for(int i=0; i<n-1; i++){
        cout<<"Podaj liczbê: ";
        cin>>b;
        if(a*b>0) cout<<"S¹siaduj¹ca para: ("<<a<<", "<<b<<")  "<<endl;
        a=b;
    }
}
