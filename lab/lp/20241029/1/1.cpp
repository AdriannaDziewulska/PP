#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;

main(){
    system("chcp 1250>>null");
    int a, c;
    float b, z;
    cout<<"Program przelicza jednostki."<<endl;
    cout<<"1) metry na cale"<<endl;
    cout<<"2) funty na kg"<<endl;
    cout<<"3) dolary na Euro i na z�ot�wki"<<endl;
    cout<<"Wybierz co chcesz zamienie�: ";
    cin>>a;
    if(a==1){
        cout<<"Podaj metry: ";
        cin>>c;
        b=c*39.370;
        cout<<endl<<c<<" metr�w to "<<fixed<<setprecision(3)<<b<<" cali."<<endl;
    }
    else if(a==2){
        cout<<"Podaj funty: ";
        cin>>c;
        b=c/2.2046;
        cout<<endl<<c<<" funt�w to "<<fixed<<setprecision(3)<<b<<" kilogram�w."<<endl;
    }
    else if(a==3){
        cout<<"Podaj dolary: ";
        cin>>c;
        b=c*0.93;
        z=c*4.03;
        cout<<endl<<c<<" dolar�w to "<<fixed<<setprecision(3)<<b<<" euro."<<endl;
        cout<<c<<" dolar�w to "<<fixed<<setprecision(3)<<z<<" z�otych."<<endl;
    }

}
