#include<iostream>
#include<cstdlib>
using namespace std;

int wzor(int n){
    if(n==0) return 1;
    else if(n==1) return 2;
    else if(n>1) return wzor(n-1)*wzor(n-2);
}

main(){
    system("chcp 1250>>null");
    cout<<"Program rekurencyjnie rozwi¹zuje wzór an={1, gdy n=0; 2, gdy n=1; an-1*an-2, gdy n>1}."<<endl;
    int n;
    cout<<"Podaj n: ";  cin>>n;
    cout<<endl<<"Wynik dla a"<<n<<": "<<wzor(n)<<endl;
}
