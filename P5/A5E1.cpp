#include <iostream>
#include "figuras.h"
using namespace std;
int main(){
 Point a;
 Point b(2,2);
 cout<<"Ponto a: \n"<<a.getX()<<","<<a.getY()<<endl;
 cout<<"Ponto b: \n"<<b.getY()<<","<<b.getY()<<endl;
 cout<<"Ponto a: "<<a<<endl;
 cout<<"Ponto b: "<<b<<endl;
 Figura figA;
 Figura figB(Point (3,3),"vermelho");
 cout<<"Figura A: "<<figA<<endl;
 cout<<"Figura B: "<<figB<<endl;
 Circle cA;
 Circle cB(5,b,"amarilho");
 cout<<"Circulo A: "<<cA<<endl;
 cout<<"Circulo B: "<<cB<<endl;
 Rectangle rA;
 Rectangle rB(7,10,b,"Red");
 cout<<"Rectangulo A: "<<rA<<endl;
 cout<<"Rectangulo B: "<<rB<<endl;
 Square sA;
 Square sB(5,b,"Bluuu");
 cout<<"Square A: "<<sA<<endl;
 cout<<"Square B: "<<sB<<endl;

 cout<<"Area : "<<cB.Area()<<endl;
 cout<<"Area : "<<rB.Area()<<endl;
 cout<<"Area : "<<sB.Area()<<endl;
}
