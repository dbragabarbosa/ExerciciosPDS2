#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main() 
{
    bool x = false;
    bool newX = (3 > 5);
    int y = 2 + 3;

    string s = "Thiago"; // O tipo String não é um tipo primitivo da linguagem, ele é um tipo abstrato de dados. Então voce precisa dar #include <string>
    string q = "Noronha";
    string newString = s + " " + q; // Ë possivel fazer operacoes com strings tambem
    cout << "'" << newString << "'" << endl;


// A gente nao consgeue usar cin pra ler uma frase completa, pois ele retorna quando tem algum espaco
// Para isso, usamos getline, que recebe dois paramtroes, de onde vira os dados e para onde vou colocar 
// Getline só retorna quando encontra um caractere de fim de linha ou de fim de arquivo

    // string m;
    // getline(cin, m);
    // cout << m << endl;

    // string v;
    // while (getline(cin, v))
    // {
    //     cout << v << endl;
    // }

// Agora quero ler o nome do arquivo do teclado e depois abrir esse arquivo e pegar os dados de lá
// Preciso incluir a biblioteca fstream 
// Utilizamos a variavel ifstream para ler dados de arquivos (como o fopen em C)

    string arq;
    cin >> arq;
    ifstream fin(arq);
    string a;
    while(getline(fin, a))
    {
        cout << a << endl;
    }


// Se eu quero agora jogar o que li em um arquivo para outro arquivo 
// Vou utilizar a variavel ofstream

    string entrada, saida;
    cin >> entrada >> saida;
    ifstream fin(entrada);
    string b;

    ofstream fout(saida);  // ofstream vai criar um novo arquivo com o nome que eu digitar no terminal e colocar os dados do arquivo de entrada
    // Se eu quiser que ofstream nao crie um novo arquivo e sim continue um arquivo já existente
    //ofstream fout(saida, ios_base::app);

    while(getline(fin, b))
    {
        cout << b << endl;
    }



// Para fazer processamento de strings preciso fazer #include <sstream>
    // Um tipo de string que lê de strings
    string u = "Thaigo 42 (31)0000-0000 123000.00"   // Quero separar esses valores em tipos e variaveis diferentes
    stringstream sin(u);   // Vai separando por caractere invisível 
    string nome;
    sin >> nome;
    int idade;
    sin >> idade;
    string telefone;
    sin >> telefone;
    float saldo;
    sin >> saldo;

    cout << nome << endl;
    cout << idade << endl;
    cout << telefone << endl;
    cout << saldo << endl;


// No caso de eu querer que meu caractere separador seja ;
// Vou fazer um programa que le dados de um arquivo e separa os valores encontrados por ;

    ifstream fin("entrada.txt");
    string linha;
    while(getline(fin, linha))
    {
        stringstream sin(linha); // Agora eu tenho uma string sin que vai sendo atualizada pelo stringstream
        string newNome;
        getline(sin, newNome, ';');  // Para o getline para quando encontrar um ;
        cout << "Nome: " << newNome << endl;
        string newIdade;
        getline(sin, newIdade, ';');  // O getlie vai ler tudo depois do último ; ate'encontrar o próximo
        cout << "Idade: " << newIdade << endl;
        string newProfissao;
        getline(sin, newProfissao, ';');  // O getlie vai ler tudo depois do último ; ate'encontrar o próximo
        cout << "Profissao: " << newProfissao << endl;
        cout << endl;

    }



// Exemplo de conversao de string para int

    string h = "14";
    int j;
    stringstream sin(h); //sin é o nome que eu escolho da minha variavel stringstream, pode ser qualquer nome
    sin >> j;
    cout << j + 1 << endl;

// OU, MAIS FACIL

    string h = "14";
    int j;
    stringstream (h) >> j; //sin é o nome que eu escolho da minha variavel stringstream, pode ser qualquer nome
    cout << j + 1 << endl;


    return 0;
}