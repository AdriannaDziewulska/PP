#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    float day, month, year, curday, curmonth, curyear, cur, bday, days;
    cout<<"Program, kt�ry po wczytaniu  dnia, miesi�ca i roku urodzenia obliczy liczb� prze�ytych dni."<<endl<<endl;
    cout<<"Podaj dzie� urodzenia: ";
    cin>>day;
    cout<<"Podaj miesi�c urodzenia: ";
    cin>>month;
    cout<<"Podaj rok urodzenia: ";
    cin>>year;
    cout<<"Podaj dzie� aktualny: ";
    cin>>curday;
    cout<<"Podaj miesi�c aktualny: ";
    cin>>curmonth;
    cout<<"Podaj rok aktualny: ";
    cin>>curyear;

    cur=curday+curmonth*30.5+curyear*365.25;
    bday=day+month*30.5+year*365.25;
    days=cur-bday;
    cout<<endl<<"Min�o "<<(int)days<<" dni.";

}
