// TRATAMENTO DE EXCEÇÕES

// exceções sào diferentes de erros
// 
// exemplos de exceções: entrada errada do usuário, vc tentou ler o arquivo e ele nao tava lá, etc ...

// em geral, temos os tratadores e os
// 




#include <iostream>

using namespace std;

struct ExececaoParametrosInvalidos 
{
    int divisor;
    int dividendo;
};  // é muito comum a gente criar uma classe ou um struct para retornar os dados que a gente quer no throw 
// é comum o struct chamar o nome da exceção também 

struct ExecaoDivisorZero
{
    string erro;
};


// função de divisão inteira 
int dividir(int a, int b)
{
    if(b == 0)
    {
        ExecaoDivisorZero s("Divisão por zero");
        throw s;
    }

    if(a < 0 || b < 0)
    {
        ExececaoParametrosInvalidos p;
        p.dividendo = a;
        p.divisor = b
        throw p;   // no throw a gente passa só uma variável, então, se eu quero retornar mais de um valor, eu crio um struct para isso
    }

    int q = 0;

    while(a >= b)
    {
        a = a - b;
        q++;
    }

    return q;
}
// a computação está correta, entretanto, na hora de utilizar podemos ter problemas
// por exemplo, o usuário entrar com alguma entrada errada, como 17 e 0
// o jeito mais comum de resolver esse tipo de problema é usando if, pórem, isso não é uma boa prática de programação 
// em C++, utilizamos: TRY, THROW E CATCH 
// por padrão, a função roda até encontrar um return
// podemos colocar um throw no lugar de um return, pórem, o throw pode retornar qualquer variável de qualquer tipo de dado
// Ex: string s("Divisão por zero");
// throw s;
// precisamos garantir que a função esteja dentro de um bloco try
// TRY: presta atenção aqui...
// para acontecer o tratamento de exceções, o bloco tem que estar dentro de um bloco try
//  para tratar as exceções, precisamos de um outro bloco, chamado CATCH 
// nesse exemplo, quando a função dividir lança o throw, todo o bloco try é parado e passa para o bloco catch


float dividirReal(float a, float b)
{
    if(b == 0)
    {
        ExecaoDivisorZero s("Divisão por zero");
        throw s;    // agora eu tenho duas funções diferentes que computam a mesma exceção
    }
    return a / b;
}

int main()
{
    int x;
    cin >> x;
    int y;
    cin >> y;

    try 
    {

        int z = dividir(x, y);
        cout << "O quociente é igual a " << z << endl;

        float r = dividirReal(x-1, y-1);    // agora eu tenho duas funções diferentes que computam a mesma exceção no mesmo try
        cout << "O quociente do decremento é igual a " << z << endl;  // o que vai acontecer é que, assim que chegar no primeiro throw, todo o programa para e é lançado o tratamento de erro

    } catch (ExecaoDivisorZero e)
    {
        // aqui dnetro eu faço o tratamento da execeção
        // por exemplo:
        cout << "Erro: " << e.erro << endl;
        return 1;
    } catch (ExececaoParametrosInvalidos e)  // vc pode ter quantos catch vc quiser, para tratar quantas exceções vc quiser, mas cada um tem que receber um tipo de dado diferente
    {
        cout << "Erro: Os parâmetros " << e.dividendo << e.divisor << " não são válidos" << endl;
        return 1;
    } catch (...)   // é o catch default 
    {
        cout << "Erro desconhecido" << endl;
        return 1;
    }


    return 0;
}