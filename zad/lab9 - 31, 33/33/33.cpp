#include<iostream>
#include<cstdlib>
using namespace std;

void tabC(int A[],int sizeA,int B[],int sizeB,int C[]){
    int a=0,b=0,i=0;
    while(a<sizeA&&b<sizeB){
        if(A[a]<=B[b])C[i++]=A[a++];
        else C[i++]=B[b++];
    }
    while(a<sizeA){
        C[i++]=A[a++];
    }
    while(b<sizeB){
        C[i++]=B[b++];
    }
}

int main(){
    system("chcp 1250>>null");
    cout<<"Program ��czy dwie tablice jednowymiarowe A i B liczb ca�kowitych o uporz�dkowanych niemalej�co elementach w jedn� tablic� C zachowuj�c porz�dek."<<endl;
    int* A=new int[50];
    int* B=new int[50];
    int* C=new int[100];
    int sizeA=0,sizeB=0,x;
    int lastA=INT_MIN;


    cout<<endl<<"Wprowad� elementy tablicy A (wpisz 0, aby zako�czy�):"<<endl;
    cin>>x;
    while(x!=0&&sizeA<50){
        if(x>=lastA){
            A[sizeA++]=x;
            lastA=x;
        }
        else cout<<"B��d: elementy musz� by� niemalej�ce. Wprowad� ponownie: ";
        cin>>x;
    }


    int lastB=INT_MIN;
    cout<<endl<<"Wprowad� elementy tablicy B (wpisz 0, aby zako�czy�):"<<endl;
    cin>>x;
    while(x!=0&&sizeB<50){
        if(x>=lastB){
            B[sizeB++]=x;
            lastB=x;
        }
        else cout<<"B��d: elementy musz� by� niemalej�ce. Wprowad� ponownie: ";
        cin>>x;
    }


    tabC(A,sizeA,B,sizeB,C);
    cout<<endl<<"Tablica C: ";
    for(int i=0;i<sizeA+sizeB;i++){
        cout<<C[i]<<" ";
    }
    cout<<endl;


    delete[] A;
    delete[] B;
    delete[] C;
    return 0;
}
