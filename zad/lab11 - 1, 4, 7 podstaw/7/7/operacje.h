#ifndef OPERACJE_H
#define OPERACJE_H

struct Wektor{
    int dane[3];
    Wektor operator+(Wektor w2);
};

struct Macierz{
    int dane[2][2];
    Macierz operator+(Macierz m2);
};

struct Struktura{
    int pole1;
    int pole2;
    Struktura operator+(Struktura s2);
};

#endif
