#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

double Horner(int n, double x) {
    double w=0.0;
    int a;
    for (int i=0; i<=n; ++i){
        cout<<"Podaj wsp�czynnik a" <<i<< ": ";
        cin>>a;
        w=w*x+a;
    }
    return w;
}

int main(){
    system("chcp 1250>>null");
    cout<<"Program oblicza warto�� wielomianu n-tego stopnia."<<endl;
    int n;
    double x;
    cout<<"Podaj stopie� wielomianu: ";
    cin>>n;
    cout<<"Podaj warto�� x: ";
    cin>>x;
    double w=Horner(n, x);
    cout<<"Warto�� wielomianu w(" <<x<< ") = "<<w<<endl;
}
