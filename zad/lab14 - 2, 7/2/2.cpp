#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

struct ksiazka{
    char p[1];
    string autor;
    string tytul;
    int cena;
    int ilosc_egzemplarzy;
};

main(){
    system("chcp 1250>>null");
    ifstream we("ksiazki.txt");
    cout<<"Program wczytuj�cy dane z pliku ksi��ki.txt u�ywaj�c struktur, sortuj�c ksi�zki rosn�co wzgl�dem ilo�ci egzemplarzy."<<endl;
    ksiazka k[3];
    int y=0;
    while(!we.eof()){
        we>>k[y].autor>>k[y].tytul>>k[y].cena>>k[y].p>>k[y].ilosc_egzemplarzy;
        y++;
    }
	int c=0, s=3;
	for(int i=0; i<s; i++){
		for(int j=0; j<s-1; j++){
			if(k[j].ilosc_egzemplarzy>k[j+1].ilosc_egzemplarzy){
				swap(k[j].ilosc_egzemplarzy,k[j+1].ilosc_egzemplarzy);
				swap(k[j].autor,k[j+1].autor);
				swap(k[j].cena,k[j+1].cena);
				swap(k[j].tytul,k[j+1].tytul);
				c++;
			}
		}
		if(c==0) break;
		c=0;
	}
    for(int i=0; i<3; i++){
        cout<<endl<<"Autor: "<<k[i].autor;
        cout<<endl<<"Tytu�: "<<k[i].tytul;
        cout<<endl<<"Cena: "<<k[i].cena<<k[i].p;
        cout<<endl<<"Ilo�� egzemplarzy: "<<k[i].ilosc_egzemplarzy<<endl;
    }

    ofstream plik("ksiazki.bin", ios::binary);
    for(int i=0; i<3; i++){
        plik.write(reinterpret_cast<char*>(&k[i]), sizeof(k[i]));
    }
    cout<<endl<<"Dane zapisane do pliku binarnego ksiazki.bin"<<endl;
}
