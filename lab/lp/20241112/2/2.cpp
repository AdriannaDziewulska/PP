#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

main(){
    system("chcp 1250>>null");
    int a, e=0;
    cout<<"Program sprawdza czy liczba jest pierwsza."<<endl;
    cout<<endl;
    cout<<"Podaj liczbê: ";
    cin>>a;
    cout<<endl;
    for(int i=2; i<a; i++) if(a%i==0) e++;
    if(e>0) cout<<"Liczba nie jest pierwsza.";
    else cout<<"Liczba jest pierwsza.";
    cout<<endl;
}
