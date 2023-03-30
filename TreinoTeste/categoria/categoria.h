#ifndef TREINOESTUDOPO_CATEGORIA_H
#define TREINOESTUDOPO_CATEGORIA_H
#include <iostream>
using namespace std;
class categoria{
protected:
    int numeroCategoria;

public:
    categoria();
    categoria(int numeroCategoria_);
    friend ostream & operator<<(ostream &os,const categoria &n);
    friend istream & operator>>(istream &is, categoria &n);
    enum categoriaCarro{nada,economico,luxuoso,familiar};

    int getNumeroCategoria() const;

    void setNumeroCategoria(int numeroCategoria);

protected:
    categoriaCarro carr;
};



#endif //TREINOESTUDOPO_CATEGORIA_H
