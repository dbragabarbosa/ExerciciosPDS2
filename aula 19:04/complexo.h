// AQUI SÓ COLOCO A DEFINIÇÃO 

#pragma once    // FALA PRA COMPILAR ESSE ARQUIVO SÓ UMA VEZ, AO INVÉS  DE COMPILAR NO #INCLUDE "COMPLEXO.H" NOS OUTROS DOIS ARQUIVOS 

// OU

#ifndef COMPLEXO_H
#define COMPLEXO_H

struct Complexo
{
    double real;   // ATRIBUTOS DA STRUCT
    double imag;
    Complexo conjugado();   //ESSA FUNÇÃO NÃO RECEBE PARÂMETRO, POIS ELA JÁ É CHAMADA POR ALGUM NÚMERO COMPLEXO ESPECIFICO 
};

#endif   


// PARA COMPILAR E JUNTAR TUDO  -->   c++ struct.cpp complexo.cpp -o main