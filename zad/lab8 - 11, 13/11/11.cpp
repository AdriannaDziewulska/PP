#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main() {
    system("chcp 1250>>null");
    cout<<"Program dzieli tablice na K tablic 'plastrów' wzglêdem jednego z wymiarów"<<endl;
    int a=3,b=3,c=4,s;
    s=0;
    int*** T=new int**[a];
    for(int i=0;i<a;i++) {
        T[i]=new int*[b];
        for(int j=0;j<b;j++) {
            T[i][j]=new int[c];
        }
    }
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            for(int k=0;k<c;k++) {
                T[i][j][k]=++s;
            }
        }
    }
    cout<<"wymiar1 = "<<a<<"    wymiar2 = "<<b<<"   wymiar3 = "<<c<<endl;
    int K,w;
    cout<<"Podaj K: ";cin>>K;
    cout<<"Który wymiar chcesz podzieliæ? (1,2,3): ";cin>>w;
    if(w==1) {
        if(a%K!=0) {
            while(a%K!=0) {
                cout<<"Wymiar 1 o rozmiarze "<<a<<" nie dzieli siê równo, podaj inne K: ";
                cin>>K;
            }
        }
        for(int i=0;i<K;i++) {
            cout<<endl<<"Plaster nr "<<i+1<<endl;
            for(int j=i*(a/K);j<i*(a/K)+(a/K);j++) {
                for(int k=0;k<b;k++) {
                    for(int l=0;l<c;l++) {
                        cout<<"["<<j<<"],["<<k<<"],["<<l<<"] = "<<T[j][k][l]<<endl;
                    }
                }
            }
        }
    }
    if(w==2) {
        if(b%K!=0) {
            while(b%K!=0) {
                cout<<"Wymiar 2 o rozmiarze "<<b<<" nie dzieli siê równo, podaj inne K: ";
                cin>>K;
            }
        }
        for(int i=0;i<K;i++) {
            cout<<endl<<"Plaster nr "<<i+1<<endl;
            for(int k=0;k<a;k++) {
                for(int j=i*(b/K);j<i*(b/K)+(b/K);j++) {
                    for(int l=0;l<c;l++) {
                        cout<<"["<<k<<"],["<<j<<"],["<<l<<"] = "<<T[k][j][l]<<endl;
                    }
                }
            }
        }
    }
    if(w==3) {
        if(c%K!=0) {
            while(c%K!=0) {
                cout<<"Wymiar 3 o rozmiarze "<<c<<" nie dzieli siê równo, podaj inne K: ";
                cin>>K;
            }
        }
        for(int i=0;i<K;i++) {
            cout<<endl<<"Plaster nr "<<i+1<<endl;
            for(int l=0;l<a;l++) {
                for(int k=0;k<b;k++) {
                    for(int j=i*(c/K);j<i*(c/K)+(c/K);j++) {
                        cout<<"["<<l<<"],["<<k<<"],["<<j<<"] = "<<T[l][k][j]<<endl;
                    }
                }
            }
        }
    }
    for(int i=0;i<a;i++) {
        for(int j=0;j<b;j++) {
            delete[] T[i][j];
        }
        delete[] T[i];
    }
    delete[] T;
    return 0;
}
