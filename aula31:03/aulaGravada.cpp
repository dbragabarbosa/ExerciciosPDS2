// Vamos fazer um programa em C++ em que eu declaro um vetor e imprimo a média dele

#include <iostream>
#include "media.h"

using std::cout;
using std::endl;

int main()
{
    float v[] = {3, 4, 2, 1, 5};
    cout << "A média é " << media(5, v) << endl;
}

// PARA COMPILAR ESSE PROGRAMA QUE DEPENDE DE OUTROS ARQUIVOS
//g++ media.cpp soma.cpp aulaGravada.cpp -o teste    ---> a ordem não importa
// 
