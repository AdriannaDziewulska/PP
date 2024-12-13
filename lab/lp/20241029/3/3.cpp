#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

double Horner(int n, double x) {
    double w=0.0;
    int a;
    for (int i=0; i<=n; ++i){
        cout<<"Podaj wspó³czynnik a" <<i<< ": ";
        cin>>a;
        w=w*x+a;
    }
    return w;
}

int main(){
    system("chcp 1250>>null");
    cout<<"Program oblicza wartoœæ wielomianu n-tego stopnia."<<endl;
    int n;
    double x;
    cout<<"Podaj stopieñ wielomianu: ";
    cin>>n;
    cout<<"Podaj wartoœæ x: ";
    cin>>x;
    double w=Horner(n, x);
    cout<<"Wartoœæ wielomianu w(" <<x<< ") = "<<w<<endl;
}
