#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<string>
using namespace std;

main(){
    system("chcp 1250>>null");
//    //3.a
//    cout<<"Program, kt�ry po wczytaniu imienia m�wi czy jest to kobieta czy m�czyzna."<<endl;
//    cout<<"Podaj imi�: ";
//    string a, b="";
//    cin>>a;
//    if(a[a.size()-1]=='a' ||a[a.size()-1]=='A') cout<<"To imi� jest �e�skie."<<endl;
//    else cout<<"To imi� jest m�skie."<<endl;
//    for(int i=a.size()-1; i>=0; i--){
//        b+=a[i];
//    }
//    cout<<"na wspak: "<<b<<endl;

//    //5
//    cout<<"Program, kt�ry po wczytaniu napisu zamienia znaki odst�pu na gwiazdki."<<endl;
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
//    cout<<"Program, kt�ry z napisu usuwa znaki odst�pu."<<endl;
//    cout<<"Napis bez odst�p�w: "<<c<<endl;

    char z;
    cout<<"Program, kt�ry klasyfikuje klawisze."<<endl;
    cout<<"Wci�nij klawisz: ";
    z=getch();
    if(z<='z' && z>='a') cout<<"ma�a litera"<<endl;
    else if(z<='Z' && z>='A') cout<<"du�a litera"<<endl;
    else if(z<='9' && z>='0') cout<<"cyfra"<<endl;
    else if((int)z==13) cout<<"ENTER"<<endl;
    else if((int)z==27) cout<<"ESC"<<endl;
    else if((int)z==0) cout<<"F1"<<endl;
    else cout<<"Inny klawisz"<<endl;

}
