// QUERO IMPLEMENTAR UMA PILHA
// ELA VAI CRESCENDO 
// O PROBLEMA É QUE VC NÃO SABE QUANTOS ELEMENTOS VC VAI INSERIR
// VC SÓ FICA SABENDO QUANDO O PROGRAMA JÁ ESTÁ EXECUTANDO

// O PRIMEIRO PASSO É DEFINIR O CONTRATO
// O QUE É A PILHA E QUAIS SÃO OS MÉTODOS QUE VÃO ESTAR NA PILHA   --> ARQUIVO PILHA.H


// NESSA AULA VAMOS FAZER A ALOCAÇÃO ESTÁTICA



#include "pilha.h"

Pilha::Pilha()
{
    tamanho_ = 0;
}

float Pilha::topo()
{
    return elementos_[tamanho_ - 1];
}

bool Pilha::vazia()
{
    return (tamanho_ == 0);
}

void Pilha::Inserir(float k)
{
    elementos_[tamanho_] = k;
    tamanho_++;
}

void Pilha::Remover()
{
    tamanho_--;
}



