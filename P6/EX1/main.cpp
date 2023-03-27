#include "vetorponto.h"
#include <iostream>
using namespace std;

int main() {
    Tuple A(3);
    cout<<A<<endl;
    Tuple B;
    cout<<B<<endl;
    A.changeValue(0,10);
    cout<<A<<endl;
    cout<<" --------- "<<endl;
    Tuple C(A);
    cout<<A<<endl;
    cout<<C<<endl;
    cout<<"-----"<<endl;
    Point3D p1;
    Point3D p2;
    p2.changeValue(0,2);
    p2.changeValue(1,3);
    cout<<p1<<endl;
    cout<<p2<<endl;
    for(int i=0;i<p1.Getelements();i++){
        int a=a+1;
        p1.changeValue(i,a);
        cout<<p1<<endl;
    }
    cout<<"###################"<<endl;
    Point3D p3;
    Point3D p4;
    p3.changeValue(0,1);
    p4.changeValue(0,2);
    cout<<p3<<endl;
    cout<<p4<<endl;
    bool b;
    b=(p3==p4);
    cout<<b<<endl;
}
