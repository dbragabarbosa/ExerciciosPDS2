// Apresentação de TADs

// LER A DOCUMENTAÇÃO DO TAD ESPECÍFICO PARA SABER USAR MELHOR

// Fazendo programa com o TAD list

#include <iostream>
#include <string>

#include <list>

using namespace std;


//Função que imprime uma lista
void Imprimir(list<int> v)
{
    //v.begin();   // Me fala onde está o primeiro elemento da lista
    // Para acessar os elementos da lista, vc precisar ir pulando de 1 em 1 

    list<int>::iterator it = v.begin();   // Usando o TAD iterator, que funciona como um ponteiro

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
}



int main()
{
    list<int> t;  // []
    t.push_back(5); // [5]
    t.push_bacl(-8); // [5 -8]
    t.push_front(14); // [14 5 -8]       Agora consigo fazer push_front, ao contrário dos vectors 
    t.push_front(-1); // [-1 14 5 -8]

    t.clear();

    
    // Exemplo de como se inserir um elemento no meio da lista

    list<int>::iterator it = t.begin();
    it++;
    it++;
    t.insert(it, 90);  // [-1 14 90 5 -8]
    // t.insert(t.begin(), 90);  // Eu passo como parametros que vou inserir o segundo parametro antes do primeiro parametro


    // Exemplo de como se retirar um elemento no meio da lista
    list<int>::iterator it = t.begin();
    it++;
    t.erase(it, 90);  // [-1 90 5 -8]


    return 0;
}