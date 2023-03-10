#ifndef CLASS01_TIME_H
#define CLASS01_TIME_H
#include <iostream>
using namespace std;
class Time{
private:
    //Atributos
    unsigned int Hour_,Minute_,Second_;
    void Normalize();
public:

    explicit Time(unsigned int h=0,unsigned int m = 0,unsigned int s = 0);

    // Metodos
    void ShowTime() const;
    int GetSeconds() const;
    int GetMinutes() const;
    int GetHours() const;
    Time operator+ (Time tempo1);
    Time operator- (Time tempo1);
    //para dizer que posso acessar coisas da class ostream
    friend ostream& operator<<(ostream& os, Time t);
   // Time operator* (Time tempo1, float outro);
    void Add(Time FirstTime,Time SecondTime);
};

#endif //CLASS01_TIME_H
