#include<iostream>
#include<cstdlib>
using namespace std;

struct Pracownik
{
    char nazwisko[20];
    char adres[20];
    float brutto;
    bool pali;
};

main(){
    system("chcp 1250>>null");
    int n;
    Pracownik a[50];
    cout<<"Program jest baz� danych pracownik�w."<<endl;
    cout<<"Ile pracownik�w chcesz wpisa� do bazy? ";
    cin>>n;
    cout<<endl;
    float b=0.0, minn=100000.0, maxx=0.0;
    for(int i=0; i<n; i++){
        cout<<"Nazwisko: "; cin>>a[i].nazwisko;
        cout<<"Adres: "; cin>>a[i].adres;
        cout<<"Brutto: "; cin>>a[i].brutto;
        b+=a[i].brutto;
        if(a[i].brutto>maxx) maxx=a[i].brutto;
        if(a[i].brutto<minn) minn=a[i].brutto;
        cout<<"Czy pali (0/1): "; cin>>a[i].pali;
        cout<<endl;
    }
    cout<<endl<<"Suma pensji brutto wszystkich pracownik�w: "<<b<<endl;
    cout<<endl<<"Warto�� maksymalnej pensji brutto: "<<maxx<<endl;
    cout<<endl<<"Warto�� minimalnej pensji brutto: "<<minn<<endl;
    cout<<endl<<"Osoby pal�ce: ";
    for(int i=0; i<n; i++){
        if(a[i].pali==1) cout<<endl<<a[i].nazwisko;
    }

}
