#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    ifstream we("student.txt");
    ofstream wy("wynik.txt");
    wy<<"Program oblicza �redni� warto�� stypendium student�w pierwszego roku dla danych z pliku studenci."<<endl;
    int x=0, y=0;
    string a;
    int b,s;
    while(!we.eof()){
        we>>a>>a>>s>>a;
        x+=s;
        y++;
    }

    double c=x/y;
    wy<<endl<<"�rednia warto�� stypendium student�w: "<<c;
}
