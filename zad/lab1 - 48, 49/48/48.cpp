#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");

    cout<<"Program sprawdzaj�cy czy w podanym ci�gu naprzemiennie wyst�puj� liczby dodatnie i ujemne."<<endl<<endl;
    int a, e=0, x;
    cout<<"Podaj liczb�: ";
        cin>>a;
        if(a>0) x=1;
        else x=-1;
    while(a!=0){
        cout<<"Podaj liczb�: ";
        cin>>a;
     //   if(a==0) break;
        if(a>0 && x==-1) x=1;
        else if(a<0 && x==1) x=-1;
        else e++;
    }
    if(e>0) cout<<endl<<"Ci�g nie jest naprzemiennie dodatni oraz ujemny."<<endl;
    else cout<<endl<<"Ci�g jest naprzemiennie dodatni oraz ujemny."<<endl;
}
