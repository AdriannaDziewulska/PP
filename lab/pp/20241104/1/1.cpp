#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct Studenci{
    char Nazwisko[30];
    char Kierunek[15];
    char Przedmiot[15];
    int Ocena;
};

int main(){
    system("chcp 1250>>null");
    int n;
    Studenci s[50];
    cout<<"Program jest baz� danych student�w."<<endl;
    cout<<"Ilu student�w chcesz wpisa� do bazy? ";
    cin>>n;
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<"Podaj dane "<<i+1<<" studenta: "<<endl;
        cout<<"Nazwisko: "; cin>>s[i].Nazwisko;
        cout<<"Kierunek: "; cin>>s[i].Kierunek;
        for(int j=3*i; j<3*i+3; j++){
            cout<<"Przedmiot: "; cin>>s[j].Przedmiot;
            cout<<"Ocena: "; cin>>s[j].Ocena;
        }
        cout<<endl;
    }
    float parametr;
    cout<<endl<<"Podaj parametr �redniej: ";
    cin>>parametr;
    cout<<endl<<"Osoby powy�ej �redniej: "<<endl;
    for(int i=0; i<n; i++){
        float x=0;
        for(int j=3*i; j<3*i+3; j++){
            x+=s[j].Ocena;
        }
        x/=3;
        if(x>=parametr) cout<<endl<<"Nazwisko: "<<s[i].Nazwisko<<endl<<"�rednia: "<<x<<endl;
    }


}
