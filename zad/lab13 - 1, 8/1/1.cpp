#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    ifstream we("student.txt");
    cout<<"Program oblicza �redni� warto�� stypendium student�w pierwszego roku dla danych z pliku studenci."<<endl;
    int x=0, y=0;
    string a, nazwisko;
    int rok,stypendium;
    while(!we.eof()){
        we>>a>>a>>rok>>a>>stypendium;
        if(rok==1){
            x+=stypendium;
            y++;
        }
    }
    double c=x/y;
    cout<<endl<<"�rednia warto�� stypendium student�w pierwszego roku: "<<c<<endl;
}
