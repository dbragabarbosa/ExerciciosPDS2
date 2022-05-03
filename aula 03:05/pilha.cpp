#include "pilha.h" 

Pilha::Pilha()
{
    this->topo_ = nullptr;
}

float Pilha::topo()
{
    // return (*topo_).chave;
    return topo_->chave;
}

bool Pilha::vazia()
{
    return (topo_ == nullptr);
}

void Pilha::Inserir(float k)
{
    // // No* ptr = new No;
    // // (*ptr).chave = k;
    // // (*ptr).proximo = topo_;
    // // É IGUAL A:
    // No* ptr = new No{k, topo_};
    //
    // topo_ = ptr;
    //É IGUAL A:
    topo_ = new No{k, topo_};
}

void Pilha::Remover()
{
    No* aux = topo_;
    topo_ = (*topo_).proximo;
    delete aux;
}

Pilha::˜Pilha()
{
    while(!vazia())
    {
        Remover();
    }
}