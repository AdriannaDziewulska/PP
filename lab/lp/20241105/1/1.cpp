#include<iostream>
#include<cstdlib>
#include<conio.h>

using namespace std;

int main(){
    system("chcp 1250 >> null");
    int n, l=0, s=0;
    cout<<"Program, który z danego ci¹gu n-elementowego wypisze znalezione liczby trzycyfrowe i sprawdzi, czy s¹ podzielne przez 3"<<endl;
    cout<<"Podaj n: ";
    cin>>n;
    char a, a1=' ', a2=' ';

    for(int i=0; i<n; i++){
        cout<<"Podaj znak: ";
        a=getch();
        cout<<a<<endl;

        if(a>='0' && a<='9'){
            l++;
            if(l==1){
                s=(a-'0')*100;
            }
            else if(l==2){
                s+=(a-'0')*10;
            }
            else if(l==3){
                s+=(a-'0');
                l=0;
                if(s%3==0) cout<<"Podzielna przez 3: "<<s<<endl;
                else cout<<s<<endl;
                s=0;
            }
        }
        else l=0;

        a2=a1;
        a1=a;
    }
}
