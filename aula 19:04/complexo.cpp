// AQUI EU COLOCO TODOS OS DETALHES DE IMPLEMENTAÇÃO 

#include "complexo.h"  


Complexo Complexo::conjugado()   //ESSA FUNÇÃO NÃO RECEBE PARÂMETRO, POIS ELA JÁ É CHAMADA POR ALGUM NÚMERO COMPLEXO ESPECIFICO 
{
    Complexo y;

    y.real = real;
    y.imag = -imag;

    return y;    
}


// PARA COMPILAR   -->   c++ -c complexo.cpp

 
