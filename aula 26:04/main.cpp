// TERMINANDO DE VER TIPOS ABSTRATOS DE DADOS

// O OBJETIVO DA AULA É ENTENDER QUE, QUANDO A GENTE SEPARA OS DADOS PARA COLOCAR ELES COMO PRIVADOS E SEPARA MÉTODOS 
// E COLOCA COMO PÚBLICOS, QUANDO EU QUERO MODIFICAR ALGO NA MINHA IMPLEMENTAÇÃO, EU NÃO PRECISO MUDAR NADA NO ARQUIVO MAIN

// A GENTE UTILIZA ESSA TÉCNICA QUANDO VAMOS CONSTRUIR OS NOSSOS TADS
// ISSO É O --ENCAPSULAMENTO--

// SE VC FAZ ISSO EM TODOS OS MODULOS DO SEU PROGRAMA, TUDO SERÁ INDEPENDENTE 

// A PARTIR DISSO, TROCAMOS O NOME DE STRUCT PARA CLASS 





//VAMOS APRENDER A CRIAR O NOSSO PRÓPRIO TIPO ABSTRATO DE DADOS E COLOCA-LO EM UMA BIBLIOTECA

// VAMOS CRIAR UM TIPO DE DADO QUE REPRESENTA UM NÚMERO COMPLEXO

#include <iostream>
#include <utility>    // PARA CONSTRUIR O PAIR 
#include <cmath>    // PARA USAR SQRT


#include "complexo.h"    // QUERO USAR ESSA MINHA STRUCT EM QUALQUER OUTRO LUGAR 

using namespace std;


//UMA FORMA DE SE CONSTRUIR UM NOVO TIPO DE DADO
struct Complexo
{
    double real;   // ATRIBUTOS DA STRUCT
    double imag;
    
    Complexo conjugado()   //ESSA FUNÇÃO NÃO RECEBE PARÂMETRO, POIS ELA JÁ É CHAMADA POR ALGUM NÚMERO COMPLEXO ESPECIFICO 
    {
        Complexo y;

        y.real = real;
        y.imag = -imag;

        return y;
    }
};


//FUNÇÃO QUE RETORNA AS RAÍZES DE UMA EQUAÇÃO DO SEGUNDO GRAU
pair<Complexo, Complexo> Raizes(double a, double b, double c)
{
    Complexo c1, c2;
    double delta = b * b - 4 * a * c;

    if(delta >= 0.0)
    {
        c1.imag() = c2.imag() = 0.0;
        c1.real() = ((-b) + sqrt(delta)) / (2 * a);
        c2.real() = ((-b) - sqrt(delta)) / (2 * a);
    }
    else
    {
        c1.real() = (-b) / (2 * a);
        c1.imag() = sqrt(-delta) / (2 * a);
        c2 = c1.conjugado();
    }

    pair<Complexo, Complexo> par = {c1, c2};
    return par;
}


//FUNÇÃO PARA IMPRIMIR O NÚMERO COMPLEXO
void Imprimir(Complexo x)
{
    if(x.imag == 0.0)
    {
        cout << x.real << endl;
    }
    else if(x.imag < 0)
    {
        cout << x.real << " - " << -x.real << "i" << endl;
    }
    else 
    {
        cout << x.real << " + " << x.imag << "i" << endl;
    }
}


int main()
{
    Complexo x(2.0, -3,0);

    Complexo y;
    y = x.simetrico();

    Complexo z;
    z = x.somar(y);

    Imprimir(x);
    Imprimir(y);
    Imprimir(z);

    return 0;
}
