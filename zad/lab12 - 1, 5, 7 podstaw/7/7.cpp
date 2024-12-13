#include<iostream>
#include<cstdlib>
using namespace std;

void wczytajTablice(int T[], int n, int i=0){
    if(i<n){
        cout<<"Podaj element ["<<i+1<<"]: ";
        cin>>T[i];
        wczytajTablice(T, n, i+1);
    }
}

void wyswietlTablice(int T[], int n, int i=0){
    if(i<n){
        cout<<T[i]<<"    ";
        wyswietlTablice(T, n, i+1);
    }
}

void wstawElement(int T[], int n, int k, int kk){
    if(n>k){
        T[n]=T[n-1];
        wstawElement(T,n-1,k,kk);
    }
    else T[k]=kk;
}

main(){
    system("chcp 1250>>null");
    cout<<"Program wczytuje dane do tablicy n-elementowej liczb ca³kowitych z mo¿liwoœci¹ zamiany argumentu na indeksie k."<<endl<<endl;
    int n, k, kk;
    cout<<"Podaj n: ";  cin>>n;
    int* T=new int[n+1];

    wczytajTablice(T, n);
    cout<<endl<<"Tablica przed wstawieniem elementu: "<<endl;
    wyswietlTablice(T, n);
    cout<<endl;
    cout<<endl;

    cout<<"Podaj k: ";  cin>>k;
    cout<<"Podaj now¹ wartoœæ k: "; cin>>kk;
    cout<<endl;

    wstawElement(T, n, k, kk);
    cout<<"Tablica po wstawieniu elementu: ";
    cout<<endl;

    wyswietlTablice(T, n+1);
    cout<<endl;

    delete[] T;
    return 0;

}
