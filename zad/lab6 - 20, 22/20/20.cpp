#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");

    float T[10][10];
    int N;
    cout<<"Program obliczaj�cy �redni� spo�r�d poszczeg�lnych element�w tablicy."<<endl;
    cout<<"Podaj wymiar tablicy NxN: ";
    cin>>N;
    if(N>10) exit(0);
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout<<"Element["<<i<<"]["<<j<<"] = ";
            cin>>T[i][j];
        }
    }


//1
    float s1=0.0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
                s1+=T[i][j];
        }
    }
    s1/=(N*N);
    cout<<endl<<"�rednia spo�r�d element�w ca�ej tablicy: "<<s1<<endl;


//2
    float s2=0.0;
    int j;
    for(int i=0; i<N; i++){
        j=i;
        s2+=T[i][j];
    }
    s2/=N;
    cout<<endl<<"�rednia spo�r�d element�w g��wnej przek�tnej: "<<s2<<endl;


//3
    float s3=0.0;
    for(int j=0; j<N; j++){
        for(int i=0; i<N; i++){
                s3+=T[i][j];
        }
        s3/=N;
        cout<<endl<<"�rednia spo�r�d element�w wiersza "<<j<<": "<<s3;
        s3=0.0;
    }cout<<endl;


//4
    float s4=0.0;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
                s4+=T[i][j];
        }
        s4/=N;
        cout<<endl<<"�rednia spo�r�d element�w kolumny "<<i<<": "<<s4;
        s4=0.0;
    }cout<<endl;
}
