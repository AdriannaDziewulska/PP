#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct pracownik{
    char nazwisko[30];
    char stanowisko[30];
};

int main(){
    system("chcp 1250>>null");
    string* T = new string[50];
    pracownik* baza = new pracownik[50];
    int s=0;
    cout<<"Program tworz¹cy listê stanowisk na podstawie listy pracowników"<<endl;
    while(true){
        cout<<endl<<"Podaj dane "<<s+1<<" pracownika:"<<endl;
        cout<<"Nazwisko (aby zakoñczyæ wpisz 'X'): "; cin.getline(baza[s].nazwisko, 30);
        if(strcmp(baza[s].nazwisko, "X")==0) break;
        cout<<"Stanowisko: "; cin.getline(baza[s].stanowisko, 30);
        s++;
    }
    int x=0;
    for(int i=0; i<s; i++){
        bool exists=false;
        for(int j=0; j<x; j++){
            if(strcmp(baza[i].stanowisko, T[j].c_str())==0){
                exists=true;
                break;
            }
        }
        if(!exists){
            T[x]=baza[i].stanowisko;
            x++;
        }
    }
    cout<<endl<<"Unikalne stanowiska:"<<endl;
    for(int i=0; i<x; i++){
        cout<<T[i]<<endl;
    }
    delete[] T;
    delete[] baza;
    return 0;
}
