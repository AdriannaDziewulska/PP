#include<iostream>
#include<cstdlib>
#include<cmath>
#include <ctime>
using namespace std;

main(){
    system("chcp 1250>>null");
    srand(time(0));
    cout<<"Program, który obliczy i wypisze wartoœæ miejsca zerowego funkcji liniowej f(x)=ax+b z dok³adnoœci¹ eps."<<endl;
    int a=(rand() % 21 - 10);
    int b=(rand() % 21 - 10);
    cout<<"Wspó³czynniki: a = "<<a<<", b = "<<b<<endl;
    int p, k;
    float m,eps;
    cout<<"Podaj przedzia³ poszukiwañ [p, k]: "<<endl;
    cout<<"p = ";
    cin>>p;
    cout<<"k = ";
    cin>>k;
    cout<<"Podaj eps (dok³adnoœæ poszukiwanego miejsca zerowego): ";
    cin>>eps;
    float fp=a*p+b;
    float fk=a*k+b;
    if(fk*fp>=0){
        cout<<"Metoda bisekcji nie zadzia³a, poniewa¿ funkcja nie zmienia znaku w przedziale ["<<p<<", "<<k<<"]."<<endl;;
        exit(0);
    }

    float fm=0;
    while(abs(fm)<eps){
        m=(p+k)/2.0;
        fm=a*m+b;
        if(abs(fm)<eps) break;
        if(fp*fm<0){
            k=m;
            fk=fm;
        }
        else{
            p=m;
            fp=fm;
        }
    }

    cout<<endl<<"Miejsce zerowe funkcji z dok³adnoœci¹ eps: "<<m<<endl;
}
