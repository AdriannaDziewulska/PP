#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program, który podane s³owo zaszyfruje metod¹ p³otu o dwóch rzêdach."<<endl;
    string a, r1, r2, szyfr;
    int s;
    cout<<"Podaj s³owo do zaszyfrowania: ";
    cin>>a;
    s=a.size();
    for(int i=0; i<s; i++){
        if(i%2==0) r1+=a[i];
        else r2+=a[i];
    }
    szyfr=r1+r2;
    cout<<endl<<"Zaszyfrowane s³owo: "<<szyfr<<endl;
}
