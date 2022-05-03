#ifndef PILHA_H
#define PILHA_H

struct No  // PARA CRIAR AS 'DUAS CAIXINHAS' PARA ARMEZAR OS VALORES DE UM ELEMENTO E O ENDEREÇO DE MEMÓRIA PARA O PRÓXIMO ELEMENTO
{
    float chave;
    No* proximo;
};

// Representa uma pilha de números reais
class Pilha
{
    private:
        No* topo_;
    public:
    // Cria uma pilha vazia()
    Pilha();

    // Retorna o elemento no topo da pilha
    float topo();


// ...

}