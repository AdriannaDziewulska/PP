#include<iostream>
#include<cstdlib>
using namespace std;


main(){
    system("chcp 1250>>null");
    cout<<"Program, kt�ry sprawdzi czy podany ci�g liczb jest uporz�dkowany, nierosn�co lub niemalej�co."<<endl;
    int n = 0, x, y, m = 0, r = 0;

    cout<<"Podaj wyraz ci�gu: ";
    cin>>x;

    if(x==0)cout<<"Ci�g nie zawiera element�w."<<endl;
    do{
        cout<<"Podaj wyraz ci�gu: ";
        cin>>y;

        if(y==0) break;
        if(x>=y) m++;
        if(x<=y) r++;
        x=y;
        n++;

    } while (true);

    if(m==n) cout<<"Ci�g jest nierosn�cy."<<endl;
    else if(r==n) cout<<"Ci�g jest niemalej�cy."<<endl;
    else cout<<"Ci�g nie jest uporz�dkowany."<<endl;



////    cout<<"Program kt�ry wy�wietla ocen� na podstawie punkt�w z kolkwium w zakresie 0-10."<<endl;
////    cout<<"Podaj punkty: ";
////    int p;
////    cin>>p;
////    cout<<endl;
////    if(p==0 || p==1) cout<<"Ocena: mierna.";
////    else if(p==2 || p==3) cout<<"Ocena niedostateczna.";
////    else if(p==4 || p==5) cout<<"Ocena dostateczna.";
////    else if(p==6 || p==7) cout<<"Ocena dobra.";
////    else if(p==8 || p==9) cout<<"Ocena bardzo dobra.";
////    else if(p==10) cout<<"Ocena celuj�ca.";
////    cout<<endl;

    cout<<"Program obliczaj�cy warto�� wyra�enia: 0!+1!+...+n!."<<endl;
    int n, s, ss=1;
    cout<<"Podaj n: ";
    cin>>n;
    for(int i=1; i<=n; i++){
            s=1;
        for(int j=i; j>0; j--){
            s*=j;
        }
        ss+=s;
    }
    cout<<endl<<"Wynik wyra�enia dla n: "<<ss<<endl;
}
