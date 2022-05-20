#include "fila.h"

#include <string>
#include <iostream>

using namespace std;

// Cria uma fila vazia;
Fila::Fila()
{
    primeiro_ = nullptr;
    ultimo_ = nullptr;
}

// Retorna o primeiro elemento da fila.
// Precondição: a fila *não* pode estar vazia.  
string Fila::primeiro()
{
    return primeiro_->chave;
}

// Retorna o último elemento da fila.
// Precondição: a fila *não* pode estar vazia.  
string Fila::ultimo()
{
    // return (this->ultimo_)->chave;
    return ultimo_->chave;
}

// Informa se a fila está vazia.
bool Fila::vazia()
{
    return (primeiro_ == nullptr);
}

// Insere um elemento no fim da fila.
void Fila::Inserir(string k)
{
    if (vazia()) 
    {
        primeiro_ = ultimo_ = new No{k, nullptr};
    } 
    else 
    {
        ultimo_ = ultimo_->proximo = new No{k, nullptr};
    }
}

// Remove o elemento no início da fila. 
// Precondição: a fila *não* pode estar vazia.
void Fila::Remover()
{
    No* removido = primeiro_;

    if (removido == ultimo_) 
    {
        primeiro_ = ultimo_ = nullptr;
    } 
    else 
    {
        primeiro_ = primeiro_->proximo;
    }

    delete removido;
}

// Retorna o número de elementos na fila.
int Fila::tamanho()
{
    int n = 0;
    for (No* i = primeiro_; i != nullptr; i = i->proximo) 
    {
        n++;
    }
    
    return n;
}

// Libera toda a memória alocada para a fila.
Fila::~Fila()
{
    while(!vazia())
    {
        Remover();
    }
}