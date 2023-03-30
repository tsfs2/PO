#ifndef TREINOESTUDOPO_TESTEID_H
#define TREINOESTUDOPO_TESTEID_H
#include <iostream>
using namespace std;

class Teste{
protected:
    int nota_;
    string data_;
    int id_;
    static int generateId();
public:
    Teste();
    Teste(int nota,const string &data);
    friend ostream & operator<<(ostream &os,const Teste &te);
    friend istream & operator>>(istream &is, Teste &n);
    enum tipoMaterial{null,papel,plastico,madeira};
    static string ConvertMaterial(const tipoMaterial &tipo);

    const string &getData() const;

    void setData(const string &data);

    int getNota() const;

    void setNota(int nota);

    tipoMaterial getMaterial() const;

    void setMaterial(tipoMaterial material);

protected:

    tipoMaterial material;
};
#endif //TREINOESTUDOPO_TESTEID_H
