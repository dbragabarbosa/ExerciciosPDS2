// Apresentação de TADs

// Fazendo programa com o TAD queue 


#include <iostream>
#include <string>

#include <queue>  //Para poder criar filas

using namespace std;


// Função que soma todos os elementos da minha fila
int somar(queue<int q>)
{
    int soma = 0;
    while(!q.empty())
    {
        soma = soma + q.front();  // q.front é o elemento de frente da fila
        q.pop();     // q.pop retira o elemento de frente da fila
    }
    return soma;
}



int main()
{
    // Aprensentação do TAD queue
                    
                    //queue<string> q;  // Criando uma fila de strings 
                    queue<int> q;  // Criando uma fila de inteiros 


                    // Se eu fosse criar um vetor no lugar, por exemplo, int v[100], já teria que colocar um tamanho, nesse caso como 100,que posso não saber 
                    // Já na fila, eu não tenho limite de elementos 

                    // além disso, ao ver uma variável do tipo fila, sei que vou coletar elementos em uma ordem e processa-los

                    // A fila só serve para colocar mais elementos ao fim e retirar do ínicio processados

                    // A desvantagem das filas é que, nos vetores vc pode acessar qualquer elemento do meio, e nas filas não
                    // Mas se vc quer receber dados e processá-los na ordem em que chegaram, isso não é uma desvantagem 


                    // Exemplo de programa que coleta dados e retorna a soma 
                    int x;
                    while (cin >> x)
                    {
                        q.push(x);
                    }
                    cout << somar(q) << endl;


    return 0;
}