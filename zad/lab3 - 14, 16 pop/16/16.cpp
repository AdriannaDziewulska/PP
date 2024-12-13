#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program oblicza sumê szeregu 1 + 1/4 + 1/9 + 1/16 + ... z dok³adnoœci¹ eps = 0.001"<<endl;
    float eps=0.001, s=0.0, x;
    int i=1;
    do{
        x=1.0/(i*i);
        s+=x;
        i++;
    } while (x>=eps);

    cout<<endl<<"Suma szeregu dla eps = "<<eps<<" wynosi: "<<s<<endl;
}
