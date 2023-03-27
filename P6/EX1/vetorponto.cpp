#include "vetorponto.h"
#include <iostream>
#include <assert.h>
using namespace std;


Tuple::Tuple(unsigned int nelements):nElements(nelements) {
    //atribuir valor a nElements
    //nElements=nelements;


    //reservar memoria para o array
    new double[nElements];

    //apontar para a memoria reservada

    arr = new double[nelements];
    //inicializalos a 0
    for(int i=0;i<nElements;i++){
        arr[i]=0;
    }

}

ostream &operator<<(ostream &os, Tuple &t) {
    os<<"(";
    for(int i=0;i<t.nElements;i++){
        if(i+1==t.nElements){
            os<<t.arr[i];
        }
        else{
            os<<t.arr[i]<<", ";
        }
    }
    os<<")";
    return os;
}

Tuple::Tuple():Tuple(2){
}

void Tuple::changeValue(unsigned int index, int value) {
    assert(index<nElements);
    arr[index]=value;
    /*if(index<nElements){
        arr[index]=value;
    }
    else{
        //cerr<<"Error 404"<<endl;
        cout<<"Error 404"<<endl;
    }*/
}

Tuple::Tuple(Tuple &Copia):nElements(Copia.nElements){
    //reservar memoria para o array
    new double[nElements];
    //apontar para a memoria reservada
    arr = new double[nElements];
    //inicializalos a 0
    for(int i=0;i<nElements;i++){
        arr[i]=Copia.arr[i];
    }
}

unsigned int Tuple::Getelements() {
    return nElements;
}

unsigned int Tuple::GetValues() {
    for(int i=0;i<nElements;i++) {

        return arr[i];
    }
}

Point3D::Point3D():Tuple(3){
}
Vector3D::Vector3D(): Tuple(3){
}


//operador igual para os pontos

/*bool operator==(const Point3D &p)const {
    if(this->nElements){
        return false;
    }
    return true;
}
 */
//operator diferente para os points
/*ostream &operator!=(ostream &os, Point3D) {
    return os;
}
*/


