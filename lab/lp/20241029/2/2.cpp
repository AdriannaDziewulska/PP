#include<iostream>
#include<cstdlib>
#include <ctime>
using namespace std;

main(){
    system("chcp 1250>>null");
    srand(time(0));
    int i=0;
    float sa, a, s=0, n;
    cout<<"Program losuje liczby w przedziale [-10;10] oraz sumuje je dop�ki ich suma b�dzie mniejsza od  liczby podanej przez u�ytkownika a nast�pnie wy�wietli warto�� �redniej arytmetycznej tych liczb."<<endl;
    cout<<"Podaj liczb�: ";
    cin>>n;
    while(s<n){

        a=(rand() % 20 - 10) + (rand() / (RAND_MAX + 1.0));
        cout<<"losowa: "<<a<<endl;
        s+=a;
        cout<<"suma: "<<s<<endl;
        if(s>n){
            s-=a;
            break;
        }
        else i++;
    }
    cout<<"suma : "<<s<<endl;
    sa=s/i;
    cout<<endl<<"�rednia arytmetyczna tych liczb wynosi: "<<sa<<endl;


}
