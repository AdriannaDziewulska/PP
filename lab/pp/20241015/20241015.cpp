#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string>
using namespace std;

main(){
    system("chcp 1250>>null");
//    //3.a
//    cout<<"Program, który po wczytaniu imienia mówi czy jest to kobieta czy mê¿czyzna."<<endl;
//    cout<<"Podaj imiê: ";
//    string a, b="";
//    cin>>a;
//    if(a[a.size()-1]=='a' ||a[a.size()-1]=='A') cout<<"To imiê jest ¿eñskie."<<endl;
//    else cout<<"To imiê jest mêskie."<<endl;
//    for(int i=a.size()-1; i>=0; i--){
//        b+=a[i];
//    }
//    cout<<"na wspak: "<<b<<endl;

//    //5
//    cout<<"Program, który po wczytaniu napisu zamienia znaki odstêpu na gwiazdki."<<endl;
//    cout<<"Podaj napis: ";
//    string c;
//    getline(cin, c);
//    for(int i=0; i<c.size(); i++){
//        if(c[i]==' '){
//            c.erase(i,1);
//            c.insert(i,"*");
//        }
//    }
//    cout<<"Napis bez spacji: "<<c<<endl;
//    for(int i=0; i<c.size(); i++){
//        if(c[i]=='*'){
//            c.erase(i,1);
//        }
//    }
//    cout<<"Program, który z napisu usuwa znaki odstêpu."<<endl;
//    cout<<"Napis bez odstêpów: "<<c<<endl;

    char z;
    cout<<"Program, który klasyfikuje klawisze."<<endl;
    cout<<"Wciœnij klawisz: ";
    z=getch();
    if(z<='z' && z>='a') cout<<"ma³a litera"<<endl;
    else if(z<='Z' && z>='A') cout<<"du¿a litera"<<endl;
    else if(z<='9' && z>='0') cout<<"cyfra"<<endl;
    else if((int)z==13) cout<<"ENTER"<<endl;
    else if((int)z==27) cout<<"ESC"<<endl;
    else if((int)z==0) cout<<"F1"<<endl;
    else cout<<"Inny klawisz"<<endl;

}
