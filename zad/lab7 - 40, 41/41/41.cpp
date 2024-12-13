#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;

int main(){
    system("chcp 1250 >> null");
    float T[30][3];
    const float EPSILON=1e-6;
    int const x=0;
    int const y=1;
    int const z=2;
    int n;

    cout<<"Program, który sprawdzi czy istniej¹ w tablicy n-elementowej punkty le¿¹ce na tej samej p³aszczyŸnie."<<endl;
    cout<<"Podaj n: ";
    cin>>n;

    if(n<3){
        cout<<"Aby program dzia³a³, nale¿y podaæ minimum 3 punkty."<<endl;
        return 0;
    }

    for(int i=0;i<n;i++){
        cout<<endl<<"Podaj wspó³rzêdne punktu "<<char(65+i)<<": "<<endl;
        cout<<"x = ";
        cin>>T[i][x];
        cout<<"y = ";
        cin>>T[i][y];
        cout<<"z = ";
        cin>>T[i][z];
    }

    for(int a=0;a<n-2;a++){
        for(int b=a+1;b<n-1;b++){
            for(int c=b+1;c<n;c++){
                float aa=(T[b][y]-T[a][y])*(T[c][z]-T[a][z])-(T[b][z]-T[a][z])*(T[c][y]-T[a][y]);
                float bb=(T[b][z]-T[a][z])*(T[c][x]-T[a][x])-(T[b][x]-T[a][x])*(T[c][z]-T[a][z]);
                float cc=(T[b][x]-T[a][x])*(T[c][y]-T[a][y])-(T[b][y]-T[a][y])*(T[c][x]-T[a][x]);
                float d=-(aa*T[a][x]+bb*T[a][y]+cc*T[a][z]);

                int count=3;
                for(int i=0;i<n;i++){
                    if(i!=a && i!=b && i!=c){
                        float si=aa*T[i][x]+bb*T[i][y]+cc*T[i][z]+d;
                        if(fabs(si)<EPSILON){
                            count++;
                        }
                    }
                }

                if(count>3){
                    cout<<endl<<"Punkty le¿¹ce na jednej p³aszczyŸnie: "<<endl;
                    cout<<char(65+a)<<"("<<T[a][x]<<", "<<T[a][y]<<", "<<T[a][z]<<")"<<endl;
                    cout<<char(65+b)<<"("<<T[b][x]<<", "<<T[b][y]<<", "<<T[b][z]<<")"<<endl;
                    cout<<char(65+c)<<"("<<T[c][x]<<", "<<T[c][y]<<", "<<T[c][z]<<")"<<endl;

                    for(int i=0;i<n;i++){
                        if(i!=a && i!=b && i!=c){
                            float si=aa*T[i][x]+bb*T[i][y]+cc*T[i][z]+d;
                            if(fabs(si)<EPSILON){
                                cout<<char(65+i)<<"("<<T[i][x]<<", "<<T[i][y]<<", "<<T[i][z]<<")"<<endl;
                            }
                        }
                    }
                    cout<<endl;
                    return 0;
                }
            }
        }
    }

    cout<<"Nie znaleziono punktów le¿¹cych na tej samej p³aszczyŸnie."<<endl;
    return 0;
}
