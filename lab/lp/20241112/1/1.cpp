#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program wypisuje ilo�� liczb b�d�cych kwadratami liczb parzystych."<<endl;
    cout<<endl;
    int n, e=0;
    double x, y, b;
    cout<<"Podaj n: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cout<<"Podaj liczb� naturaln�: ";
        cin>>x;
        for(int j=0; j<=x/2; j+=2){
            if(j*j==x) e++;
        }
    }
    cout<<endl;
    cout<<"Ilo�� liczb: "<<e<<endl;

}
