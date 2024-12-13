#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

main(){
    system("chcp 1250>>null");
    int a, b, aa, i=0, aaa=0, s=0, c;
    cout<<"Program sprawdza czy dwie liczby ca³kowite s¹ liczbami lustrzanymi."<<endl;
    cout<<"Podaj pierwsz¹ liczbê: ";
    cin>>a;
    cout<<"Podaj drug¹ liczbê: ";
    cin>>b;
    c=a;
    while(c>0){
        c/=10;
        s++;
    }
    while(a>0){
        aa=a%10;
        aaa+=aa*pow(10,s-1-i);
        i++;
        a/=10;
    }
    if(aaa==b) cout<<endl<<"Te liczby s¹ lustrzane."<<endl;
    else cout<<endl<<"Te liczby nie s¹ lustrzane."<<endl;
}
