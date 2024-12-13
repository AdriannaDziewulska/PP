#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program wypisuje iloœæ liczb bêd¹cych kwadratami liczb parzystych."<<endl;
    cout<<endl;
    int n, e=0;
    double x, y, b;
    cout<<"Podaj n: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Podaj liczbê naturaln¹: ";
        cin>>x;
        for(int j=0; j<=x/2; j+=2){
            if(j*j==x) e++;
        }
    }
    cout<<endl;
    cout<<"Iloœæ liczb: "<<e<<endl;

}
