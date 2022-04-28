#ifndef PILHA_H
#define PILHA_H

//Representa uma pilha de números reais.
class pilha 
{
    private:
        int tamanho_;
        int elementos_[100000000];  // ESTOU FAZENDO ALOCAÇÃO ESTÁTICA NESSA AULA, NA PRÓXIMA AULA VAMOS FAZER ALOCAÇÃO DINÂMICA 

    public:
        //Cria uma pilha vazia
        Pilha();

        //Retorna o elemento no topo da pilha
        float topo();

        //Testa se a pilha está vazia
        bool vazia();

        //Insere k na pilha.     VAI INSERIR NO TOPO DA PILHA, POIS É ASSIM QUE ELA FUNCIONA 
        void Inserir(float k);

        //Remove o topo da pilha
        void Remover();
};

#endif