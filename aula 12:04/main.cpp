// Apresentação de TADs

// LER A DOCUMENTAÇÃO DO TAD ESPECÍFICO PARA SABER USAR MELHOR

// Fazendo programa com o TAD vector

#include <iostream>
#include <string>

#include <queue>  //Para poder criar filas

using namespace std;


// Função para imprimir os elementos de um vector
void Imprimir(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}


int main()
{
    // Aprensentação do TAD vector

    int v[100000];
    vector<int> y(100000);
    y[0] = -4;    // Posso usar vector assim como uso arrays
    y[1] = 10;
    y[99999] = y[0] * y[1];
    // cout << y.size() << endl;   // .size imprime o tamanho do vector

// A ideia do vector é que o tamanho dele pode mudar com o passar do programa 

    vector<int> x;  // Criando um vector com 0 elementos 
    x.push_back(-4);  // Coloca -4 na primeira posição do vector 
    x.push_back(10);  // Coloca 10 na segunda posição do vector
    x.push_back(34);
    
// Agora eu posso fazer
    // x[2] = x[0] * x[1];
    // cout << x[2] << endl;
    x.resize(10);    // Cria posições no vector até a posição 10

    // Função para imprimir meu vector
    Imprimir(x);

    // A desvantagem de vector, é que vc não consegue inserir ou retirar no meio do vector



    return 0;
}