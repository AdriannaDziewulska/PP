#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program, kt�ry sprawdzi czy w podanym ci�gu  znak�w s� liczby rzeczywiste, je�li tak to ile."<<endl;
    string a;
    int l=0;
    cout<<"Podaj ci�g znak�w: ";
    getline(cin, a);
    for(int i=0; i<a.size(); i++){
        if(a[i]<='9' && a[i]>='0'){
            if(a[i+1]=='.'){
                if(a[i+2]<='9' && a[i+2]>='0') l++;
            }
        }
    }
    cout<<endl<<"Liczba rzeczywistych w ci�gu: "<<l<<endl;


}
