#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    int a, b, sa=0, sb=0;
    cout<<"Program sprawdza czy dwie podane liczby s� zaprzyja�nione."<<endl;
    cout<<"Podaj pierwsz� liczb�: ";
    cin>>a;
    cout<<"Podaj drug� liczb�: ";
    cin>>b;
    for(int i=1; i<a; i++){
        if(a%i==0) sa+=i;
    }
    for(int i=1; i<b; i++){
        if(b%i==0) sb+=i;
    }
    if(sb==a && sa==b) cout<<endl<<"Te liczby s� zaprzyja�nione."<<endl;
    else cout<<endl<<"Te liczy nie s� zaprzyja�nione."<<endl;
}
