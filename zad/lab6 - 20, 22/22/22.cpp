#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

main(){
    system("chcp 1250>>null");
    srand(time(0));
    float T[10][10];
    cout<<"Program sortuj�cy tablic� uk�adaj�c najpierw kule czerwone czyli jedynki a nast�pnie kule bia�e czyli zera."<<endl;
    cout<<endl<<"Tablica wej�ciowa: "<<endl;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            T[j][i]=(rand() % 2);
            cout<<T[j][i]<<"    ";
        }
        cout<<endl;
    }
    int a=0;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(T[j][i]==1) a++;
        }
    }
    cout<<endl<<"Liczba kul czerwonych: "<<a<<endl;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            if(a>0){
                T[j][i]=1;
                a--;
            }
            else T[j][i]=0;
        }
    }
    cout<<endl<<"Tablica wyj�ciowa: "<<endl;
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            cout<<T[j][i]<<"    ";
        }
        cout<<endl;
    }
}
