#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program, kt�ry wczytuje liczb� n i wypisuje na ekran wszystkie trojki pitagorejskie, sk�adaj�ce si� z liczb mniejszych od n."<<endl;
    int n;
    cout<<"Podaj n: ";
    cin>>n;
    for(int a=1; a<n; a++){
        for(int b=a; b<n; b++){
            for(int c=b; c<n; c++){
                if(a*a+b*b==c*c) cout<<"Tr�jka pitagorejska: ("<<a<<", "<<b<<", "<<c<<")"<<endl;
            }
        }
    }
}
