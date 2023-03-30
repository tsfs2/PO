#include "testeid.h"
#include <iostream>


int Teste::generateId() {
    static int id=0;
    id+=1;
    return id;
}

string Teste::ConvertMaterial(const tipoMaterial &tipo) {
    string res;
    if(tipo == Teste::tipoMaterial::null){
        res = "Nao definido";
    }else if(tipo == Teste::tipoMaterial::papel){
        res = "Papel de Talha";
    }else if(tipo == Teste::tipoMaterial::plastico){
        res = "Plastico ABS";
    }else{
        res = "Madeira";
    }
    return res;
}

ostream &operator<<(ostream &os, const Teste &te) {
    os<<"Nota: "<<te.nota_
      <<"\nData: "<<te.data_
      <<"\nID: "<<te.id_
      <<"\nMaterial: "<<Teste::ConvertMaterial(te.material)<<endl;
    return os;
}

Teste::Teste(): nota_(0){
    data_="29-03-2023";
    id_=generateId();
    material=Teste::tipoMaterial::null;
}

Teste::Teste(int nota, const string &data) {
    nota_=nota;
    data_=data;
    id_=generateId();
}



istream &operator>>(istream &is, Teste &n) {
    cout << "Nota:";
    is >> n.nota_;
    cout << "Data:";
    is>>n.data_;
    cout << "Material:   (papel,plastico,madeira)";
    int opcao;
    is >> opcao;
    switch (opcao) {
        case 1:
            n.material=Teste::tipoMaterial::papel;
                    // Teste::tipoMaterial(1)
            break;
        case 2:
            n.material=Teste::tipoMaterial::plastico;
            break;
        case 3:
            n.material=Teste::tipoMaterial::madeira;
            break;
        default:
            n.material=Teste::tipoMaterial::null;
            break;
    }
    return is;
}

const string &Teste::getData() const {
    return data_;
}

void Teste::setData(const string &data) {
    data_ = data;
}

int Teste::getNota() const {
    return nota_;
}

void Teste::setNota(int nota) {
    nota_ = nota;
}

Teste::tipoMaterial Teste::getMaterial() const {
    return material;
}

void Teste::setMaterial(Teste::tipoMaterial material) {
    Teste::material = material;
}


