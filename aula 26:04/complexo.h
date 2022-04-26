#ifndef COMPLEXO_H
#define COMPLEXO_H

struct Complexo
{
    double real;   // ATRIBUTOS DA STRUCT
    double imag;
    Complexo conjugado();   //ESSA FUNÇÃO NÃO RECEBE PARÂMETRO, POIS ELA JÁ É CHAMADA POR ALGUM NÚMERO COMPLEXO ESPECIFICO 
};

#endif   