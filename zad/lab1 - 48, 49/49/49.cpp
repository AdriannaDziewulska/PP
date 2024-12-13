#include<iostream>
#include<cstdlib>
using namespace std;

main(){
    system("chcp 1250>>null");
    float day, month, year, curday, curmonth, curyear, cur, bday, days;
    cout<<"Program, który po wczytaniu  dnia, miesi¹ca i roku urodzenia obliczy liczbê prze¿ytych dni."<<endl<<endl;
    cout<<"Podaj dzieñ urodzenia: ";
    cin>>day;
    cout<<"Podaj miesi¹c urodzenia: ";
    cin>>month;
    cout<<"Podaj rok urodzenia: ";
    cin>>year;
    cout<<"Podaj dzieñ aktualny: ";
    cin>>curday;
    cout<<"Podaj miesi¹c aktualny: ";
    cin>>curmonth;
    cout<<"Podaj rok aktualny: ";
    cin>>curyear;

    cur=curday+curmonth*30.5+curyear*365.25;
    bday=day+month*30.5+year*365.25;
    days=cur-bday;
    cout<<endl<<"Minê³o "<<(int)days<<" dni.";

}
