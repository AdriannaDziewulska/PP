#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>
using namespace std;

float sumap(int N,float***T,int layer){
    float s=0;
    for(int i=0;i<N;i++){
        s+=T[i][i][layer];
    }
    return s;
}

int main(){
    system("chcp 1250>>null");
    srand(time(0));
    cout<<"Program z trójwymiarowej tablicy NxNxP utworzy tablicê jednowymiarow¹ zawieraj¹c¹ sumy elementów g³ównych przek¹tnych w p warstwach tablicy."<<endl;
    int N,P,p;
    cout<<"Podaj N (2-5): ";cin>>N;
    cout<<"Podaj P (2-5): ";cin>>P;
    cout<<"Podaj p (1-"<<P<<"): "; cin>>p;
    float***T = new float**[N];
    for(int i=0; i<N; i++){
        T[i]=new float*[N];
        for(int j=0; j<N; j++){
            T[i][j] = new float[P];
        }
    }
    cout<<"Tablica 3D:"<<endl;
    for(int k=0; k<P; k++){
        cout<<"Warstwa "<<k+1<<":"<<endl;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                T[i][j][k]=rand()%10;
                cout<<setw(3)<<T[i][j][k];
            }
            cout<<endl;
        }
    }
    float*ss=new float[p];
    for(int k=0;k<p;k++){
        ss[k]=sumap(N,T,k);
    }
    cout<<"Suma elementów g³ównych przek¹tnych w ka¿dej warstwie:"<<endl;
    for(int k=0;k<p;k++){
        cout<<"Warstwa "<<k+1<<": "<<ss[k]<<endl;
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            delete[]T[i][j];
        }
        delete[]T[i];
    }
    delete[]T;
    delete[]ss;
    return 0;
}
