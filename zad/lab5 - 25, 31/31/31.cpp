#include<iostream>
#include<cstdlib>
using namespace std;

bool czy_pierwsza(int a){
    if(a<2) return false;
	for(int i=2; i*i<a; i++)
		if(a%i==0) return false;
	return true;
}

main(){
    system("chcp 1250>>null");
    cout<<"Program, który wypisze kolejne liczby ci¹gu w postaci iloczynu liczb pierwszych."<<endl;
    int a=1, aa, p, d;
    while(a!=0){
        cout<<"Podaj wyraz ci¹gu: ";
        cin>>a;
        if(a==0) break;
        cout<<a<<" = ";
        aa=a;
        p=0;
        d=2;
        while(aa>1){
            while(aa%d==0){
                if(czy_pierwsza(d)==true){
                    if(p!=0) cout<<"*";
                    cout<<d;
                    p++;
                    aa/=d;
                }
            }
            d++;
            if(aa<=0) break;
        }
        cout<<endl<<endl;
    }
}
