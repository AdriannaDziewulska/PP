#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program, kt�ry podane s�owo zaszyfruje metod� p�otu o dw�ch rz�dach."<<endl;
    string a, r1, r2, szyfr;
    int s;
    cout<<"Podaj s�owo do zaszyfrowania: ";
    cin>>a;
    s=a.size();
    for(int i=0; i<s; i++){
        if(i%2==0) r1+=a[i];
        else r2+=a[i];
    }
    szyfr=r1+r2;
    cout<<endl<<"Zaszyfrowane s�owo: "<<szyfr<<endl;
}
