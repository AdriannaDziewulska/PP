#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    //1
//    int n, T[10];
//    cout<<"program wypusj¹cy elementy o indeksach parzystych z tablicy n-elementowej"<<endl;
//    cout<<"Podaj n:";
//    cin>>n;
//    cout<<"Podaj elementy tablicy: "<<endl;
//    for(int i=0; i<n; i++){
//        cout<<"element["<<i<<"] = ";
//        cin>>T[i];
//    }
//    cout<<"Elementy o parzystych indeksach: "<<endl;
//    for(int i=0; i<n; i+=2){
//        cout<<T[i]<<endl;
//    }

    //8
//    int n, m;
//    int a[10][10], Z[10], D[10], U[10], z=0, d=0, u=0;
//    cout<<"Program tworzy trzy tablice jednowymiarowe, jedna zawiera liczby wiêksze od zera, druga mniejsze a trzecia zera."<<endl;
//    cout<<"Podaj n: ";
//    cin>>n;
//    cout<<"Podaj m: ";
//    cin>>m;
//
//    for(int i=0; i<n; i++){
//        for(int j=0; j<m; j++){
//            cout<<"dana["<<i<<"]["<<j<<"] = ";
//            cin>>a[i][j];
//            if(a[i][j]==0){
//                Z[z]=a[i][j];
//                z++;
//            }
//            if(a[i][j]<0){
//                U[u]=a[i][j];
//                u++;
//            }
//            if(a[i][j]>0){
//                D[d]=a[i][j];
//                d++;
//            }
//        }
//    }
//    cout<<"Tablica dodatnich liczb: "<<endl;
//    cout<<"{";
//    for(int i=0; i<d; i++){
//        cout<<D[i]<<",";
//    }
//    cout<<"}"<<endl;
//    cout<<"Tablica ujemnych liczb: "<<endl;
//    cout<<"{";
//    for(int i=0; i<u; i++){
//        cout<<U[i]<<",";
//    }
//    cout<<"}"<<endl;
//    cout<<"Tablica liczb 0: "<<endl;
//    cout<<"{";
//    for(int i=0; i<z; i++){
//        cout<<Z[i];
//    }
//    cout<<"}"<<endl;



    //4
    cout<<"Program znajduj¹cy najd³u¿szy podci¹g zawieraj¹cy liczby dodatnie w n-elementowej tablicy liczb rzeczywistych."<<endl;
    int n, c=0, maxx=0;
    cout<<"Podaj n: ";
    cin>>n;
    float T[20];
    cout<<"Podaj elementy tablicy: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"element["<<i<<"] = ";
        cin>>T[i];
        if(T[i]>0) c++;
        else{
            if(c>maxx){
                maxx=c;
                c=0;
            }
            c=0;
        }
    }
    c=0;
    for(int i=0; i<=n; i++){
        if(T[i]>0) c++;
        else{
            if(c==maxx){
                for(int j=maxx; j>0; j--){
                    cout<<T[i-j]<<", ";
                    c=0;
                }
                cout<<endl;
            }
            c=0;
        }
    }
}
