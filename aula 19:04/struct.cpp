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
        c1.imag = c2.imag = 0.0;
        c1.real = ((-b) + sqrt(delta)) / (2 * a);
        c2.real = ((-b) - sqrt(delta)) / (2 * a);
    }
    else
    {
        c1.real = (-b) / (2 * a);
        c1.imag = sqrt(-delta) / (2 * a);
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
    //REPRESENTAÇÃO DO QUE QUERO SER CAPAZ DE FAZER 
    // Complexo c1 = 3 - 5i;
    // Complexo c2 = 2 * c1;
    // Complexo c3 = c1 + c2;
    
    // cout << c3 << endl;

    //AGORA QUE CRIEI O STRUCT, JÁ POSSO DECALRAR UM NÚMERO COMPLEXO

    // Complexo c1;
    // c1.real = 3.0;
    // c1.imag = -4.0;
    Complexo c1 = {3.0, 5.0};

    //cout << c1.real << " + " << c1.imag << "i" << endl;
    Imprimir(c1);



    double a, b, c;
    cin >> a >> b >> c;
    pair<Complexo, Complexo> p = Raizes(a, b, c);
    Imprimir(p.first);
    Imprimir(p.second);


    return 0;
}