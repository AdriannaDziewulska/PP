#include "operacje.h"

Wektor Wektor::operator+(Wektor w2){
    Wektor wynik;
    for(int i=0;i<3;++i) wynik.dane[i]=dane[i]+w2.dane[i];
    return wynik;
}

Macierz Macierz::operator+(Macierz m2){
    Macierz wynik;
    for(int i=0;i<2;++i){
        for(int j=0;j<2;++j){
            wynik.dane[i][j]=dane[i][j]+m2.dane[i][j];
        }
    }
    return wynik;
}

Struktura Struktura::operator+(Struktura s2){
    Struktura wynik;
    wynik.pole1=pole1+s2.pole1;
    wynik.pole2=pole2+s2.pole2;
    return wynik;
}
