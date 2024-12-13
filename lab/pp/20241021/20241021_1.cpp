#include<iostream>
#include<cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

main(){
    system("chcp 1250>>null");
//    int X, f0=0, f1=1, a;
//    cout<<"Program, który wczyta liczbê X oraz wyliczy i wyœwietli kolejne elementy ci¹gu Fibonacciego, które nie przekraczaj¹ wartoœci wczytanej zmiennej X"<<endl;
//    cout<<"Podaj X: ";
//    cin>>X;
//    cout<<endl<<"Ci¹g Fibbonaciego: "<<endl<<f0<<" ";
//    while(f1<=X){
//        cout<<f1<<" ";
//        a=f1;
//        f1+=f0;
//        f0=a;
//    }
//    cout<<endl;



//    cout<<"Spróbuj odgadn¹æ liczbê w trzech próbach w zakresie 0-9. Masz 3 próby."<<endl;
//    srand(time(0));
//    int x=rand()%10;
//    //cout<<x<<endl;
//    int liczb=0;
//    int pin;
//    do{
//        cout<<"Podaj liczbê: ";
//        cin>>pin;
//        liczb++;
//        if(pin==x){
//            cout<<"PIN poprawny";
//            break;
//        }
//    }
//    while(pin==x || liczb<3);
//
//    if(liczb==3 && pin!=x) cout<<"PIN niepoprawny";



    cout<<"Program obliczaj¹cy wariancjê i odchylenie standardowe ci¹gu n-elementowego: "<<endl;
    int n;
    float war, odc, s=0, s2=0, x;
    cout<<"Podaj n: ";
    cin>>n;
    //for
    for(int i=0; i<n; i++){
        cout<<"Podaj x: ";
        cin>>x;
        s2+=x*x;
        s+=x;
    }
    //while
    int i=0;
    while(i<n){
       cout<<"Podaj x: ";
        cin>>x;
        s2+=x*x;
        s+=x;
        i++;
    }
//    do while
    int i=0;
    do{
       cout<<"Podaj x: ";
        cin>>x;
        s2+=x*x;
        s+=x;
        i++;
    }
    while(i<n);
    war=s2/n-(s/n)*(s/n);
    odc=sqrt(war);
    cout<<endl<<"Wyniki:"<<endl;
    cout<<"Wariancja: "<<war<<endl;
    cout<<"Odchylenie: "<<odc<<endl;
}
