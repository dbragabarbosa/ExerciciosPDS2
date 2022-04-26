#include "complexo.h"  


// Complexo Complexo::conjugado()   //ESSA FUNÇÃO NÃO RECEBE PARÂMETRO, POIS ELA JÁ É CHAMADA POR ALGUM NÚMERO COMPLEXO ESPECIFICO 
// {
//     Complexo y(0, 0);

//     y.real_ = real_;
//     y.imag_ = imag_;

//     return y;    
// }
 
Complexo::Complexo()  // CONSTRUTOR QUE, CASO NÃO PASSE PARÂMETROS, INICIALIZE OS VALORES COMO 0.0
{
    v[0] = 0.0;
    v[1] = 0.0;
}

Complexo::Complexo(double a, double b)
{
    v[0] = a;
    v[1] = b;
}

double Complexo::real()
{
    return v[0];
}

double Complexo::imag()
{
    return v[1];
}

Complexo Complexo::conjugado()
{
    Complexo y =
}

Complexo Complexo::simetrico()
{

}

Complexo Complexo::somar(Complexo k)
{
    Complexo s;

    // (*this)  // É O NUMERO DE MEMÓRIA DE QUEM CHAMOU A FUNÇÃO 

    s.v[0] = k.v[0] + (*this).v[0];  // USEI (*this) PARA PEGAR O VALOR DE QUEM CHAMOU A FUNÇÃO 
    s.v[1] = k.v[1] + this->v[1];   // POSSO USAR this-> TAMBÉM 

    return s;
}