#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

double iloczyn(double* T, int n){
    if(n==0) return T[0];
    return T[n]*iloczyn(T, n-1);
}

main(){
    srand((time(0)));
    system("chcp 1250>>null");
    cout<<"Program oblicza iloczyn ci¹gu n-elementowego liczb rzeczywistych wylosowanych z przedzia³u (2,18)."<<endl;
    int n;
    cout<<"Podaj n: ";  cin>>n;
    double* T=new double[n];
    for(int i=0; i<n; i++){
            cout<<endl;
        T[i]=(rand()/(double)RAND_MAX)*(18.0 - 2.0) + 2.0;
        cout<<"Wylosowana liczba "<<i+1<<": "<<fixed<<setprecision(2)<<T[i]<<endl;
        cout<<"Iloczyn "<<fixed<<setprecision(2)<<iloczyn(T, i)<<endl;
    }
    delete[] T;
    return 0;
}
