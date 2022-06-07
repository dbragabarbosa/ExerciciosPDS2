// #
#define VETOR_H_

#include <string>

using namespace std;

struct ExcecaoIntervaloInvalido {
    int inicio;
    int fim;
}

struct ExcecaoIndiceForaDoIntervalo {
    int inicio;
    int fim;
    int indice;
}

struct ExcecaoIndiceNaoInicializado {
    int indice;
}



class Vetor {
    public:
        // Cria um vetor cujos índices variam de 'início'
        // PRECONDIÇÃO: fim >= inicio.
        Vetor(int inicio, int fim);

        // Altera o valor do índice i 
        // PRECONDIÇÃO: i está dentro do intervalo de índi
        void atribuir(int i, std::string valor);

        // Retorna o valor do índice i
        // PRECONDIÇÃO:

        // Retorna o valor do índice i.
        // PRECONDIÇÕES: 
        // (1) i está dentro do intervalo de índices do Vetor
        // (2) i foi inicializado anteriormente.
        string valor(int i) const;

        // Desaloca a memória reservada para os elementos 
        ˜Vetor();


    private:
        int inicio_;  // Primeiro índice válido do vetor.
        int fim_;
        std::string* elementos_; // Elementos do vetor.
        bool* inicializado_;
}

#endif