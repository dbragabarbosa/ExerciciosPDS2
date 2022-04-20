// O objetivo desse VPL é praticar os comandos de entrada e saída específicos de C++ (cin, cout) e também a utilização do 
// tipo string. Não utilize outros comando de entrada como o getline.

// Escreva um programa que lê apenas uma única palavra da entrada. Em seguida, seu programa deve contar o número de vogais 
// presente na palavra. Ao final, deve-se imprimir a quantidade de vezes que uma determinada vogal apareceu. 
// Se uma vogal não apareceu nenhuma vez ela não deve ser impressa.

#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string palavra;
    
    cin >> palavra;
    
    int numA = 0;
    int numE = 0;
    int numI = 0;
    int numO = 0;
    int numU = 0;
    
    for(int i=0; i<palavra.length(); i++)
    {
        if(palavra[i] == 'a')
        {
            numA = numA + 1;
        }
        else if(palavra[i] == 'e')
        {
            numE = numE + 1;
        }
        else if(palavra[i] == 'i')
        {
            numI = numI + 1;
        }
        else if(palavra[i] == 'o')
        {
            numO = numO + 1;
        }
        else if(palavra[i] == 'u')
        {
            numU = numU + 1;
        }
    }
    
    if(numA > 0)
    {
        cout << "a" << " " << numA << endl;
    }
    
    if(numE > 0)
    {
        cout << "e" << " " << numE << endl;
    }
    
    if(numI > 0)
    {
        cout << "i" << " " << numI << endl;
    }
    
    if(numO > 0)
    {
        cout << "o" << " " << numO << endl;
    }
    
    if(numU > 0)
    {
        cout << "u" << " " << numU << endl;
    }
    

    
  return 0;
}



