#include<iostream>
#include<cstdlib>

struct Wektor{
    int dane[3];
    Wektor operator+(Wektor w2){
        Wektor wynik;
        for(int i=0;i<3;++i)wynik.dane[i]=dane[i]+w2.dane[i];
        return wynik;
    }
    void wyswietl(){
        for(int i=0;i<3;++i)std::cout<<dane[i]<<" ";
        std::cout<<std::endl;
    }
};

struct Macierz{
    int dane[2][2];
    Macierz operator+(Macierz m2){
        Macierz wynik;
        for(int i=0;i<2;++i){
            for(int j=0;j<2;++j){
                wynik.dane[i][j]=dane[i][j]+m2.dane[i][j];
            }
        }
        return wynik;
    }
    void wyswietl(){
        for(int i=0;i<2;++i){
            for(int j=0;j<2;++j){
                std::cout<<dane[i][j]<<" ";
            }
        }
    }
};

struct Struktura{
    int pole1;
    int pole2;
    Struktura operator+(Struktura s2){
        Struktura wynik;
        wynik.pole1=pole1+s2.pole1;
        wynik.pole2=pole2+s2.pole2;
        return wynik;
    }
};

int main(){
    system("chcp 1250>>null");
    std::cout<<"Program, który wykorzystuje mechanizm przeci¹¿enia funkcji dla operacji dodawania na wektorach, macierzach prostok¹tnych i pól liczbowych w dwu ró¿nych strukturach tego samego typu."<<std::endl<<std::endl;

    Wektor w1;
    std::cout<<"Podaj 3 liczby dla pierwszego wektora: ";
    for(int i=0;i<3;++i) std::cin>>w1.dane[i];

    Wektor w2;
    std::cout<<"Podaj 3 liczby dla drugiego wektora: ";
    for(int i=0;i<3;++i) std::cin>>w2.dane[i];

    Wektor wynikWektor=w1+w2;
    std::cout<<"Wynik dodawania wektorów: ";
    wynikWektor.wyswietl();
    std::cout<<std::endl;

    Macierz m1;
    std::cout<<"Podaj 4 liczby dla pierwszej macierzy 2x2: ";
    for(int i=0;i<2;++i){
        for(int j=0;j<2;++j){
            std::cin>>m1.dane[i][j];
        }
    }
    Macierz m2;
    std::cout<<"Podaj 4 liczby dla drugiej macierzy 2x2: ";
    for(int i=0;i<2;++i){
        for(int j=0;j<2;++j){
            std::cin>>m2.dane[i][j];
        }
    }
    Macierz wynikMacierz=m1+m2;
    std::cout<<"Wynik dodawania macierzy: ";
    wynikMacierz.wyswietl();
    std::cout<<std::endl;
    std::cout<<std::endl;

    Struktura s1;
    std::cout<<"Podaj 2 liczby dla pierwszej struktury: ";
    std::cin>>s1.pole1>>s1.pole2;
    Struktura s2;
    std::cout<<"Podaj 2 liczby dla drugiej struktury: ";
    std::cin>>s2.pole1>>s2.pole2;
    Struktura wynikStruktura=s1+s2;
    std::cout<<"Wynik dodawania struktur: "<<wynikStruktura.pole1<<" "<<wynikStruktura.pole2<<std::endl;

    return 0;
}
