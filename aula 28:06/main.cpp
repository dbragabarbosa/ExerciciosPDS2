// 28/06/2022

// Vamos começar essa aula de onde paramos na últia aula 
// Vamos ver o fim de polimorfismo aparente
// Agora vamos ver tbm polimorfismo paramétrico

#include <iostream>
#include <sstream>
#include <string>

// #include "complexo.h"

using namespace std;

ostream& operator<<(ostream& out, Complexo k)
{
    if(k.img() == 0)
    {
        out << k.real();
    } else if (k.imag() > 0)
    {
        out << k.real() << " + " << k.imag() << "i ";
    } else 
    {
        out << k.real() << " - " << -k.imag() << "i ";
    } 

    return out;
}


bool operator>(Complexo a, Complexo b)
{
    if (a.real() > b.real())
    {
        return true;
    }
    if(b.real() > a.real())
    {
        return false;
    }
    return (a.imag() > b.imag());
}



int Maior(int x, int y)
{
    if(x > y)
    {
        return x;
    } else 
    {
        return y;
    }
}   // eu poderia só copiar e colar essa função trocando o tipo de retorno e dos parametros para fazer ela funcionar em outros tipos
// mas eu quero fazer é uma mesma funcao que possa ser utilizada com quaisquer tipos --> polimorfismo real


template<typename Tipo>
Tipo Maior(Tipo x, Tipo y)
{
    if(x > y)
    {
        return x;
    } else 
    {
        return y;
    }
}

template<>   // criando uma especialização 
string Maior<string>(string x, string y)
{
    if(x.size() > y.size())
    {
        return x;
    } else 
    {
        return y;
    }
}


// podemos ter templates para classes também --> exemplo no vpl5




// Chamamos de polimorfismo aparente ter várias funções de mesmo nome 
// Pois, por definicao, polimorfismo é quando vc tem um trecho de código que faz mais de uma coisa 

int main()
{
    // Complexo a(1, 2); 
    // Complexo b(2, 1);
    // a.operator+b  == a + b  --> qualquer operador é só uma função 

    // Agora vamos sobrecarregar o operador de inserção  -->  << 
    cout << a;


    cout << Maior<int>(3, 7) << endl;   // eu posso retirar o <int> que ele consegue descobrir 
    cout << Maior<double>(-34.9, 75.8) << endl;
    cout << Maior<string>("aaaaaaaa", "zz") << endl;
    cout << Maior<Complexo>(a, b) << endl;



    return 0;
}