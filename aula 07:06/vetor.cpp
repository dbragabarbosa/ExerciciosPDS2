#include "vetor.h"

#include <cassert>  // libera a função 'assert()' que recebe um parametro e dá erro e para o programa caso seja falso 
#include <string>

using std::string;

Vetor::Vetor(int inicio, int fim) {

    // assert(inicio <= fim);

    if(inicio > fim)
    {
        ExcecaoIntervaloInvalido x;
        x.inicio = inicio;
        x.fim = fim;
        throw x;
    }

    inicio_ = inicio;
    fim_ = fim;
    elementos_ = new string[fim - inicio + 1];
    inicializado_ = new bool[fim - inicio + 1];
}

void Vetor::atribuir(int i, string valor) {

    // assert(i >= inicio_ && i <= fim_);

    if(i < inicio_ || i > fim)
    {
        ExcecaoIndiceForaDoIntervalo x;
        x.inicio = inicio_;
        x.fim = fim_;
        x.indice = i;
        throw x;
    }

    int j = i - inicio_;
    elementos_[j] = valor;
    inicializado_[j] = true;
}

string Vetor::valor(int i) const {

    // assert(i >= inicio_ && i <= fim_); 

    if(i < inicio_ || i > fim)
    {
        ExcecaoIndiceForaDoIntervalo x;
        x.inicio = inicio_;
        x.fim = fim_;
        x.indice = i;
        throw x;
    }

    int j = i - inicio_;

    // assert()

    if(!inicializado_[j])
    {
        ExcecaoIndiceNaoInicializado x;
        x.indice = 
    }

    return elementos_[j];
}

Vetor::˜Vetor() {
    delete [] elementos_;
    delete [] inicializado_;
}