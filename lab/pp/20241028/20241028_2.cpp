#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    cout<<"Program znajduj�cy najd�u�szy podci�g zawieraj�cy liczby dodatnie w n-elementowej tablicy liczb rzeczywistych."<<endl;
    int n, c=0, maxx=0;
    cout<<"Podaj n: ";
    cin>>n;
    float T[20];
    cout<<"Podaj elementy tablicy: "<<endl;
    for(int i=0; i<n; i++){
        cout<<"element["<<i<<"] = ";
        cin>>T[i];
        if(T[i]>0) c++;
        else{
            if(c>maxx){
                maxx=c;
                c=0;
            }
            c=0;
        }

    }

    c=0;
    for(int i=0; i<n; i++){
        if(T[i]>0) c++;
        else{
            if(c==maxx){
                for(int j=maxx; j>0; j--){
                    cout<<T[i-j]<<", ";
                    c=0;
                }
            }
            c=0;
        }
    }

}
