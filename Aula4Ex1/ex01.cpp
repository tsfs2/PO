#include <iostream>
#include "Time.h"
using namespace std;

int main(){
    Time Tempo1(16,20,6),Tempo2(5,5,4);
    Time Tempo3;
    Time Tempo4;
    Time Tempo5;
    Time Tempo6;

    //Tempo3.Add(Tempo1,Tempo2);
    Tempo4=Tempo1+Tempo2;
    Tempo3.ShowTime();
    Tempo4.ShowTime();
    Tempo1.ShowTime();

    Tempo5=Tempo1-Tempo2;
    Tempo5.ShowTime();
    cout<<"T5: "<<Tempo5<<endl;

    return 0;
}
