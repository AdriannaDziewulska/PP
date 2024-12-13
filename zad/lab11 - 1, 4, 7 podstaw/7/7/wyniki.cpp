#include "wyniki.h"

void wyswietlWektor(Wektor w){
    for(int i=0;i<3;++i) std::cout<<w.dane[i]<<" ";
    std::cout<<std::endl;
}

void wyswietlMacierz(Macierz m){
    for(int i=0;i<2;++i) {
        for(int j=0;j<2;++j) {
            std::cout<<m.dane[i][j]<<" ";
        }
    }
}

void wyswietlStruktura(Struktura s){
    std::cout<<s.pole1<<" "<<s.pole2<<std::endl;
}
