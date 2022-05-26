// 26/05/2022

// TESTE DE SOFTWARE

// O TESTE MAIS COMUM: TESTE DE UNIDADE (conteúdo da aula de hoje)

//  vc escolhe uma unidade em particular, e testa só ela independente do resto do código
//  

// um teste de unidade:
// 1. fase de setup



// ta na pasta src

#include <iostream>

#include ""

using namespace std;

std::ostream& operator<< 



bool operator==(Complexo x, Complexo y)
{
    return x.real() == y.real() && x.imag() == y.imag();
}


int main()
{
    // fase de SETUP de um teste
    Complexo zero;
    Complexo b(2, 3);
    Complexo c(-2, -3);
    Complexo x(5, -12);
    Complexo d(0, 1);
    

    //criando um teste sem utilizar nenhum framework 
    if( !(b.multiplicar(c) == x) )
    {
        cout << "Erro! (2 + 3i) * (-2 - 3i) != (5 - 12i)" << endl;
        cout << b.multiplicar(c) << endl;   // pra dar informação pra encontrar onde deu o erro
        return 1;
    }

    if( !(b.multiplicar(c) == c.multiplicar(b)) )
    {
        cout << "Erro! b * c != c * b" << endl;
        cout << b.multiplicar(c) << endl;   // pra dar informação pra encontrar onde deu o erro
        return 1;
    }

    if( !(zero.multiplicar(c) == zero) )
    {
        cout << "Erro! c * 0 != 0" << endl;
        cout << zero.multiplicar(c) << endl;   // pra dar informação pra encontrar onde deu o erro
        return 1;
    }



    return 0;
}