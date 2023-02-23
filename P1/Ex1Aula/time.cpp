//
// Created by Admin on 17/02/2023.
//
#include <iostream>
#include <iomanip>
#include "time.h"


using namespace std;

// inicializar os atributos a zero;
time::time() {
    horas=0;
    min=0;
    seg=0;
}

// construtor para fazer "set" da nova hora
time::time(unsigned int h, unsigned int m, unsigned int s) {

    if (h>23){
        horas=23;}
    else{
        horas=h;
    }
    if(m>59){
        min=59;}
    else {
        min=m;}
    if(s>59){
        seg=59;}
    else {
        seg=s;}
}

// metodo para imprimir a hora actual padronizada
void time::print() {
    // setw() serve para definir o tamanho de uma apresentação no cout
    // setfill('') preenche os espaços vazios com um determinado caracter;
    cout
    <<setw(2)<<setfill('0')<<horas
    <<":"<<setw(2)<<setfill('0')<<min
    <<":"<<setw(2)<<setfill('0')<<seg
    <<endl;
}

void time::sum(time a,time b){
    seg=a.seg+b.seg;

    if(seg>59){
        seg-=60;
        min+=1;
    }
 // somar o minuto armazenado ao ;
    min+=(a.min+b.min);
    if(min>59){
        min-=60;
        horas+=1;
    }
    horas+= a.horas+b.horas;
}
