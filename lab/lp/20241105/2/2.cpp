#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program, kt�ry wypisze z ci�gu n-elementowego liczby oraz policzy ich sum� i �redni�."<<endl;
    int n, x=0, l=0;
    float s=0.0, d=0.0;
    char a;
    cout<<"Podaj n: ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"Podaj znak: ";
        a=getch();
        cout<<a<<endl;
        if(a>='0' && a<='9'){
            l++;
            if(l==1){
                x=(a-'0');
            }
            else if(l>1){
                x*=10;
                x+=(a-'0');
            }
        }
        else{
            l=0;
            s+=x;
            if(x>0) d++;
            x=0;
        }
    }
    cout<<endl;
    if(d==0) cout<<"Brak liczb w ci�gu."<<endl;
    else{
        float avg=s/d;
        cout<<"Suma liczb: "<<s<<endl;
        cout<<"�rednia liczb: "<<avg<<endl;
    }
}
