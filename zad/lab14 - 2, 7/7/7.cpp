#include<iostream>
#include<fstream>
#include<cstdlib>
#include<string>
#include<iomanip>
#include<ctime>
using namespace std;

struct pracownik{
    char nazwisko[10];
    char adres[20];
    char stanowisko[15];
    int brutto;
};

void wprowadzDane(pracownik &p){
    cout<<"Podaj nazwisko: ";   cin>>p.nazwisko;
    cout<<"Podaj adres: ";      cin>>p.adres;
    cout<<"Podaj stanowisko: "; cin>>p.stanowisko;
    cout<<"Podaj brutto: ";     cin>>p.brutto;
}

int main(){
    system("chcp 1250>>null");
    int liczba_pracownikow;
    cout<<"Podaj liczbe pracownikow: ";
    cin>>liczba_pracownikow;

    pracownik* p=new pracownik[liczba_pracownikow];

    for(int i=0;i<liczba_pracownikow;i++){
        cout<<endl<<"Pracownik "<<i+1<<endl;
        wprowadzDane(p[i]);
    }

    ofstream plik_binar("pracownicy.bin", ios::binary);

    for(int i=0;i<liczba_pracownikow;i++) plik_binar.write(reinterpret_cast<char*>(&p[i]),sizeof(pracownik));

    cout<<"Dane zapisane do pliku binarnego 'pracownicy.bin'"<<endl;
    plik_binar.close();

    ifstream bin_read("pracownicy.bin", ios::binary);

    pracownik* p_wczytani=new pracownik[liczba_pracownikow];
    int liczba_wczytanych=0;
    while(bin_read.read(reinterpret_cast<char*>(&p_wczytani[liczba_wczytanych]),sizeof(pracownik))) liczba_wczytanych++;

    ofstream raport("raport.txt");
    time_t teraz=time(0);
    tm* data=localtime(&teraz);

    raport<<"Raport pracowników"<<endl;
    raport<<"Data raportu: "<<put_time(data, "%Y-%m-%d %H:%M:%S")<<endl;
    raport<<"Sporz¹dzi³: Program"<<endl<<endl;

    raport<<left<<setw(15)<<"Nazwisko"<<setw(25)<<"Adres"<<setw(20)<<"Stanowisko"<<setw(10)<<"Brutto"<<endl;
    raport<<"-------------------------------------------------------------"<<endl;

    for(int i=0;i<liczba_wczytanych;i++){
        raport<<left<<setw(15)<<p_wczytani[i].nazwisko<<setw(25)<<p_wczytani[i].adres
              <<setw(20)<<p_wczytani[i].stanowisko<<setw(10)<<p_wczytani[i].brutto<<endl;
    }

    string stanowisko_do_podsumowania="Programista";
    int suma=0, liczba_na_stanowisku=0;

    for(int i=0;i<liczba_wczytanych;i++){
        if(string(p_wczytani[i].stanowisko) == stanowisko_do_podsumowania){
            suma+=p_wczytani[i].brutto;
            liczba_na_stanowisku++;
        }
    }

    raport<<endl<<"Podsumowanie dla stanowiska '"<<stanowisko_do_podsumowania<<"':"<<endl;
    if(liczba_na_stanowisku>0){
        double srednia = static_cast<double>(suma)/liczba_na_stanowisku;
        raport<<"Œrednia pensja: "<<srednia<<" PLN"<<endl;
    }
    else{
        raport<<"Brak pracowników na tym stanowisku."<<endl;
    }
    cout<<endl;
    raport.close();
    bin_read.close();

    delete[] p;
    delete[] p_wczytani;

    cout<<"Raport zosta³ zapisany do pliku 'raport.txt'."<<endl;
    return 0;
}
