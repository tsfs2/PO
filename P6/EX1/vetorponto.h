#ifndef AULA6POO_VETORPONTO_H
#define AULA6POO_VETORPONTO_H
#include <iostream>
using namespace std;
class Tuple{
protected:
    unsigned int nElements;
    double* arr;
public:
    Tuple();
    Tuple(unsigned int nelements);
    friend ostream & operator<<(ostream &os,Tuple &t);
    void changeValue(unsigned int index,int value);
    //Copia
    Tuple (Tuple &Copia);
    unsigned int Getelements();
    unsigned int GetValues();
};

class Point3D:public Tuple{
public:
    Point3D();
    //friend ostream & operator==(ostream &os, Point3D);
    //friend ostream & operator!=(ostream &os, Point3D);
    bool operator ==(Point3D &p){
        for(int i=0;i<nElements;i++){
            if(nElements==p.nElements & arr[i]==p.arr[i]){
                return true;
            }
            else{
                return false;
            }
        }
    }
    bool operator !=(Point3D &p){
        for(int i=0;i<nElements;i++){
            if(nElements!=p.nElements & arr[i]!=p.arr[i]){
                return true;
            }
            else{
                return false;
            }
        }
    }
};

class Vector3D:public Tuple{
public:
    Vector3D();
    //friend ostream & operator==(ostream &os, Vector3D);
    //friend ostream & operator!=(ostream &os, Vector3D);
    bool operator ==(Vector3D &v){
        for(int i=0;i<nElements;i++){
            if(nElements==v.nElements & arr[i]==v.arr[i]){
                return true;
            }
            else{
                return false;
            }
        }
    }
    bool operator !=(Vector3D &v){
        for(int i=0;i<nElements;i++){
            if(nElements==v.nElements & arr[i]==v.arr[i]){
                return true;
            }
            else{
                return false;
            }
        }
    }
};
#endif //AULA6POO_VETORPONTO_H
