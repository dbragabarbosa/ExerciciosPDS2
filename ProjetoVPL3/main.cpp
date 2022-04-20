// Neste exercício, você deverá implementar um programa que leia uma série de palavras da entrada padrão, e imprima a palavra 
// mais comum. Assuma que não haverá empates: toda frase de teste terá somente uma palavra mais comum. 

// Alguns exemplos no formato "frase":[palavra] seguem abaixo:

// "Um dia um dia um":[um]
// "a b b a.":[b]

// Note que na primeira frase as palavras "Um" e "um" são diferentes. 
// E note que na segunda frase há somente uma ocorrência da palavra "a" e uma ocorrência da palavra "a.", pois o ponto difere uma palavra da outra.

#include <iostream>
#include <map>  // Isto é uma dica. 

#include <sstream>
#include <string>
#include <queue>

using namespace std;

int main() 
{
    
    string texto;
    map<int, string> mapa;
    int i = 0;
    map<int, int> novoMapa;
    
    while (cin >> texto)
    {
        mapa[i] = texto;
        novoMapa[i] = 0;
        i++;
    }
    
    for(int x = 0; x < i; x++)
    {
        for(int y = 0; y < i; y++)
        {
            if(mapa[x] == mapa[y])
            {
                novoMapa[x] = novoMapa[x] + 1;
            }
        }
    }
    
    int max = 0;
    for(int j = 0; j < i; j++)
    {
        for(int h = 0; h < i; h++)
        {
            if(novoMapa[j] < novoMapa[h])
            {
                max = h;
            }
        }
    }
    
    
    cout << mapa[max] << endl;

  return 0;
}

