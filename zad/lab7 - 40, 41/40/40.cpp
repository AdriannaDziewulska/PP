#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

struct Ciasto{
    char rodzaj[15];
    char nazwa[50];
    int czas_wykonania;
    int stopien_trudnosci;
};

int main(){
    system("chcp 1250>>null");
    Ciasto baza[50];
    int iloscCiast = 0;
    cout<<"Program jest ksi��k� kucharsk� na ciasta.\n";

    for(int i = 0; i < 50; i++){
        cout<<"\nPodaj dane "<<i+1<<" ciasta:";
        cout<<"\nRodzaj (lub wpisz 'KONIEC' aby zako�czy�): ";
        cin>>ws;
        cin.getline(baza[i].rodzaj, 15);

        if(strcmp(baza[i].rodzaj, "KONIEC") == 0) break;

        cout<<"Nazwa: ";
        cin.getline(baza[i].nazwa, 50);
        cout<<"Czas wykonania (w min): ";
        cin>>baza[i].czas_wykonania;
        cout<<"Stopie� trudno�ci (1-3): ";
        cin>>baza[i].stopien_trudnosci;
        iloscCiast++;
    }

    char wybranyRodzaj[15];
    cout<<"\nWybierz rodzaj ciast, kt�re chcesz wypisa� (np. torty): ";
    cin>>ws;
    cin.getline(wybranyRodzaj, 15);

    cout<<"\nCiasta rodzaju: "<<wybranyRodzaj<<"\n";
    bool znaleziono = false;
    for(int i = 0; i < iloscCiast; i++){
        if(strcmp(baza[i].rodzaj, wybranyRodzaj) == 0){
            cout<<"- "<<baza[i].nazwa<<" (czas: "<<baza[i].czas_wykonania<<" min, trudno��: "<<baza[i].stopien_trudnosci<<")\n";
            znaleziono = true;
        }
    }
    if(!znaleziono){
        cout<<"Brak ciast tego rodzaju w ksi��ce kucharskiej.\n";
    }

    float sumaCzasu = 0;
    for(int i = 0; i < iloscCiast; i++){
        sumaCzasu += baza[i].czas_wykonania;
    }
    cout<<"\n�redni czas wykonania wszystkich ciast wynosi: "<<sumaCzasu / iloscCiast<<" min.\n";

    cout<<"\nCiasta z podzia�em na poziom trudno�ci wykonania:\n";
    for(int trudnosc = 1; trudnosc <= 3; trudnosc++){
        cout<<"\nPoziom "<<trudnosc<<":\n";
        for(int i = 0; i < iloscCiast; i++){
            if(baza[i].stopien_trudnosci == trudnosc){
                cout<<"- "<<baza[i].nazwa<<"\n";
            }
        }
    }
    return 0;
}
