#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    ifstream we("student.txt");
    cout<<"Program oblicza œredni¹ wartoœæ stypendium studentów pierwszego roku dla danych z pliku studenci."<<endl;
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
    cout<<endl<<"Œrednia wartoœæ stypendium studentów pierwszego roku: "<<c<<endl;
}
