#include <iostream>
#include <iostream>
#include "operacje.h"
#include "wyniki.h"

int main(){
    system("chcp 1250>>null");
    std::cout<<"Program, który wykorzystuje mechanizm przeci¹¿enia funkcji dla operacji dodawania na wektorach, macierzach prostok¹tnych i pól liczbowych w dwu ró¿nych strukturach tego samego typu."<<std::endl<<std::endl;
    Wektor w1, w2;
    std::cout<<"Podaj 3 liczby dla pierwszego wektora: ";
    for(int i=0;i<3;++i) std::cin>>w1.dane[i];
    std::cout<<"Podaj 3 liczby dla drugiego wektora: ";
    for(int i=0;i<3;++i) std::cin>>w2.dane[i];
    Wektor wynikWektor = w1 + w2;
    std::cout<<"Wynik dodawania wektorów: ";
    wyswietlWektor(wynikWektor);
    std::cout<<std::endl;

    Macierz m1, m2;
    std::cout<<"Podaj 4 liczby dla pierwszej macierzy 2x2: ";
    for(int i=0;i<2;++i) {
        for(int j=0;j<2;++j) {
            std::cin>>m1.dane[i][j];
        }
    }
    std::cout<<"Podaj 4 liczby dla drugiej macierzy 2x2: ";
    for(int i=0;i<2;++i) {
        for(int j=0;j<2;++j) {
            std::cin>>m2.dane[i][j];
        }
    }
    Macierz wynikMacierz=m1+m2;
    std::cout<<"Wynik dodawania macierzy: ";
    wyswietlMacierz(wynikMacierz);
    std::cout<<std::endl;
    std::cout<<std::endl;

    Struktura s1, s2;
    std::cout<<"Podaj 2 liczby dla pierwszej struktury: ";
    std::cin>>s1.pole1>>s1.pole2;
    std::cout<<"Podaj 2 liczby dla drugiej struktury: ";
    std::cin>>s2.pole1>>s2.pole2;
    Struktura wynikStruktura = s1 + s2;
    std::cout<<"Wynik dodawania struktur: ";
    wyswietlStruktura(wynikStruktura);
    std::cout<<std::endl;

    return 0;
}
