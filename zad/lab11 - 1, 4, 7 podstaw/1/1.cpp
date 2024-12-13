#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>

namespace kalkulator{
    float mnozenie(float a, float b){return a*b;}
    double dzielenie(float a, float b){return a/b;}
    float dodawanie(float a, float b){return a+b;}
    float odejmowanie(float a, float b){return a-b;}
    void generator_liczb(double T[], int n){
        for(int i=0; i<n; i++){
            T[i]=-2.0+static_cast<double>(rand())/ RAND_MAX*(3.0 + 2.0);

        }
    }
    float sinn(float stopnie) { return sin(stopnie*M_PI/180); }
    float cosn(float stopnie) { return cos(stopnie*M_PI/180); }
    float tgn(float stopnie) { return tan(stopnie*M_PI/180); }
}


main(){
    system("chcp 1250>>null");
    srand(static_cast<unsigned>(time(0)));
    float a, b;
    std::cout<<"Program posiada  u¿ytkow¹ przestrzeñ nazw kalkulator, u¿yj jej."<<std::endl;\
    std::cout<<std::endl;
    std::cout<<"Podaj liczby a i b do dzia³añ arytmetycznych: "<<std::endl;
    std::cout<<"Podaj a: "; std::cin>>a;
    std::cout<<"Podaj b: "; std::cin>>b;
    std::cout<< "\n"<< "Dodawanie: "<<kalkulator::dodawanie(a, b)<<std::endl;
    std::cout<<"Odejmowanie: "<<kalkulator::odejmowanie(a, b)<<std::endl;
    std::cout<<"Mno¿enie: "<<kalkulator::mnozenie(a, b)<<std::endl;
    std::cout<<"Dzielenie: "<<kalkulator::dzielenie(a, b)<<std::endl;

    int n;
    std::cout<<std::endl<<"Podaj n dla liczb losowych: ";
    std::cin>>n;
    double t[n];
    kalkulator::generator_liczb(t, n);
    std::cout<<"Losowe liczby: ";
    for(int i=0; i<n; i++){
        std::cout<<t[i]<<" ";
    }
    std::cout<<std::endl;


    std::cout<<std::endl<<"Podaj k¹t: ";
    std::cin>>n;
    std::cout<< "Sinus("<<n<<"): "<<kalkulator::sinn(n)<<std::endl;
    std::cout<<"Cosinus("<<n<<"): "<<kalkulator::cosn(n)<<std::endl;
    std::cout<<"Tangens("<<n<<"): "<<kalkulator::tgn(n)<<std::endl;
    std::cout<<std::endl;

}
