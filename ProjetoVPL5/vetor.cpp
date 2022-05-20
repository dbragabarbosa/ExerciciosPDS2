#include "vetor.h"

#include <string>
#include <iostream>

using namespace std;


// Cria um vetor cujos índices variam de 'inicio' até 'fim'.
// PRECONDIÇÃO: fim >= inicio.
Vetor::Vetor(int inicio, int fim) : inicio_(inicio)
{
    int aux = fim - inicio;
    aux += 1;
    elementos_ = new string[aux];
    // this->inicio_ = inicio;
}


// Altera o valor do índice i.
// PRECONDIÇÃO: i está dentro do intervalo de índices do vetor.
void Vetor::atribuir(int i, std::string valor)
{
    int j = i - inicio_;
    elementos_[j] = valor;
}


// Retorna o valor do índice i.
// PRECONDIÇÕES: 
// (1) i está dentro do intervalo de índices do vetor.
// (2) i foi inicializando anteriormente.
string Vetor::valor(int i) const
{
    int j = i - inicio_;
    return elementos_[j];
}


// Desaloca a memória reservada para os elementos do vetor.
Vetor::~Vetor()
{
    delete [] elementos_;
}