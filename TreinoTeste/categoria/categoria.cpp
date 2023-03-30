#include "categoria.h"
#include <iostream>
using namespace std;
ostream &operator<<(ostream &os, const categoria &cat) {
    os<<"Numero da categoria: "<<cat.numeroCategoria<<"\nCategoria: "<<categoria::categoriaCarro(cat.carr)<<endl;
    return os;
}
istream &operator>>(istream &is, categoria &cat){
    cout<<"Numero da categoria do carro?"<<endl;
    is>>cat.numeroCategoria;
    cout<<"Qual a categoria do carro?"<<endl;
    cout<<"1. Economico"<<endl<<"2. Luxuoso"<<endl<<"3. Familiar"<<endl;
    int temp;
    is>>temp;
    switch (temp) {
        case 1:
            cat.carr=categoria::categoriaCarro::economico;
            break;
        case 2:
            cat.carr=categoria::categoriaCarro::luxuoso;
            break;
        case 3:
            cat.carr=categoria::categoriaCarro::familiar;
            break;
        default:
            cat.carr=categoria::categoriaCarro::nada;
    }
    return is;
}
categoria::categoria():numeroCategoria(0){
    carr=categoria::categoriaCarro::nada;
}

categoria::categoria(int numeroCategoria_){
    numeroCategoria=numeroCategoria_;
}

int categoria::getNumeroCategoria() const {
    return numeroCategoria;
}

void categoria::setNumeroCategoria(int numeroCategoria) {
    categoria::numeroCategoria = numeroCategoria;
}


