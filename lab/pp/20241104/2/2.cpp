#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct TSamochod{
    char Marka[15];
    char Silnik[15];
    int Rocznik;
    char NumerNadwozia[30];
};

int main(){
    system("chcp 1250>>null");
    int n;
    TSamochod s[50];
    cout<<"Program jest baz� danych samochod�w."<<endl;
    cout<<"Ile samochod�w chcesz wpisa� do bazy? ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"Podaj dane "<<i+1<<" samochodu: "<<endl;
        cout<<"Marka: "; cin>>s[i].Marka;
        cout<<"Silnik: "; cin>>s[i].Silnik;
        cout<<"Rocznik: "; cin>>s[i].Rocznik;
        cout<<"Numer nadwozia: "; cin>>s[i].NumerNadwozia;
        cout<<endl;
    }
    cout<<"Wybierz co chcesz zrobi�:"<<endl;
    cout<<"1) Wypisa� z bazy samochody danej marki."<<endl;
    cout<<"2) Wypisa� z bazy samochody danego rocznika."<<endl;
    cout<<"3) Wypisa� z bazy samochoddanego numeru VIN oraz jego pozosta�e dane."<<endl;
    int x;
    cin>>x;
    if(x==1){
        string a;
        cout<<endl<<"Podaj mark�: ";
        cin>>a;
        for(int i=0; i<n; i++){
            if(s[i].Marka==a){
                cout<<endl<<"Marka: "<<s[i].Marka;
                cout<<endl<<"Silnik: "<<s[i].Silnik;
                cout<<endl<<"Rocznik: "<<s[i].Rocznik;
                cout<<endl<<"Numer nadwozia: "<<s[i].NumerNadwozia<<endl;
            }
        }
    }
    if(x==2){
        int a;
        cout<<endl<<"Podaj rocznik: ";
        cin>>a;
        for(int i=0; i<n; i++){
            if(s[i].Rocznik==a){
                cout<<endl<<"Marka: "<<s[i].Marka;
                cout<<endl<<"Silnik: "<<s[i].Silnik;
                cout<<endl<<"Rocznik: "<<s[i].Rocznik;
                cout<<endl<<"Numer nadwozia: "<<s[i].NumerNadwozia<<endl;
            }
        }
    }
    if(x==3){
        string a;
        cout<<endl<<"Podaj numer nadwozia: ";
        cin>>a;
        for(int i=0; i<n; i++){
            if(s[i].NumerNadwozia==a){
                cout<<endl<<"Marka: "<<s[i].Marka;
                cout<<endl<<"Silnik: "<<s[i].Silnik;
                cout<<endl<<"Rocznik: "<<s[i].Rocznik;
                cout<<endl<<"Numer nadwozia: "<<s[i].NumerNadwozia<<endl;
            }
        }
    }


}
