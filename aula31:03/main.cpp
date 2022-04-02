// AULA 2 - 31/03

// PARA COMPILAR ESSE PROGRAMA
//c++ main.cpp -o main
// ./main

#include <stdio.h>  // O iostream é uma biblioteca melhor que o stdio.h mas podemos usar a que quiser
#include <iostream>

// toda vez que vc se refere a biblioteca padrao em c++, vc tem que escrever nome e sobrenome. EX: std::cout

using namespace std;  // pra nao ter que usar std::

int main()
{
    int i = 89;

    std::cout << "Minha idade é " << 42 << i << " anos" << std::endl;  // 
    cout << "Minha idade é " << 42 << i << " anos" << std::endl;  // USANDO IOSTREAM

    printf("OIIII\n"); // USANDO STDIO.H


    int j;                                //
    cin >> j;                             //
    cout << "Voce digitou " << j << endl; // USANDO IOSTREAM

    int x;                          //
    scanf("%d", &x);                //
    printf("Vc digitou %d\n", x);  // USANDO STDIO.H


    int w;
    while (cin >> w)
    {
        cout << w * w << endl;
    }  //ENQUANTO O CIN CONSEGUIR LER ALGO, O WHILE SERÁ VERDADEIRO E O PROGRAMA RETORNARÁ O QUADRADO DO NUM DIGITADO





    return 0;
}


// o cin se refere à entrada padrao de dados do seu programa e o cout à saída padrao do seu programa
// para mudar para que o cin se refira a um texto  EX:   ./main < entrada.txt 