// APRESENTAÇÃO DE TIPOS ABSTRATOS DE DADOS


// VC NÃO QUER SABER COMO ESTÁ IMPLEMENTADO O TAD QUE VC ESTÁ USANDO
// E VICE-VERSA
// AO CRIAR UM TAD, VC SE PREOCUPA COM A IMPLEMENTAÇÃO

#include <iostream>
#include <set>  // REPRESENTA UM CONJUNTO
#include <string>
#include <fstring>

// SE A ORDEM É IMPORTANTE PRA VC, USE LIST, SE NÃO, USE SET

using namespace std;


// FUNÇÃO PARA IMPRIMIR UM CONJUNTO
void Imprimir(const set<string>& s)    // O CONST & ESTÁ AÍ PRA AUMENTAR A EFICIÊNCIA DO CÓDIGO, POIS C++ PASSA POR CÓPIA, E O & FAZ PASSAR POR REFERÊNCIA, E O CONST DEIXA CLARO QUE AS VARIÁVEIS NÃO PODEM SER MODIFICADAS
{
    set<string>::iterator it;  // UM ITERADOR EXTENDE O QUE É UM PONTEIRO, É UM PONTEIRO QUE SABE QUAL É O PRÓXIMO ELEMENTO DO CONJUNTO E VAI CORRETAMENTE ATÉ ELE COM O IT++
    // ESSA DECLARAÇÃO DO ITERADOR IT PODERIA ESTAR DENTRO DO FOR  OU COLOCAR auto it = s.begin(), FAZ O ITERATOR IT SER DO TIPO RETORNADO POR S.BEGIN()
    for(it = s.begin)(); it != s.end(); it++)  // .BEGIN RETORNA O MENOR ELEMENTO DO CONUNTO, ESCOLHIDO ARBITRARIAMENETE POR PADRÃO COMO O PRIMEIRO
    {
        cout << *it << endl;     // IMPRIME O CONJUNTO NA ORDEM E SEM REPETIÇÃO 
    }    
}



//FUNÇÃO PARA IMPRIMIR SÓ OS NÚMERODS MAIORES QUE UM TAL Y DE UM CONJUNTO
void ImprimirMaiores(set<int>& s, int y)
{
    for(auto it = s.find(y); it != s.end(); it++)  // O FIND VAI RETORNAR A POSIÇÃO NA MEMÓRIA DE Y
    {
        cout << *it << endl;
    }
}



int main()
{
    set<string> conj;  // CRIANDO UM CONJUNTO DE STRINGS 
    cout << conj.size(conj) << endl;  // .SIZE RETORNA O NÚMERO DE ELEMENTOS NO CONJUNTO

    // EM UM CONUUNTO, NÃO TEM ELEMENTOS REPETIDOS 
    // OU SEJA, OS ELEMENTOS SÃO ÚNICOS 

    conj.insert("Thiago");  // ADICIONA UM ELEMENTO AO MEU CONJUNTO
    cout << c.size(conj) << endl;    // RETORNA 1
    conj.insert("Thiago");
    conj.insert("Thiago");
    conj.insert("Thiago");
    cout << c.size(conj) << endl;    // AINDA RETORNA 1


    // COLOCANDO DADOS DE OUTRO ARQUIVO NO MEU CONJUNTO
    set<string> c;
    string nome;
    while(cin >> nome)    // NA HORA DE EXECUTAR:  ./main <entrada.txt    , pois modifica a entrada padrão 
    {
        c.insert(nome);
    }
    Imprimir(c);


    // PROGRAMA EM QUE, EU DIGITO UMA STRING E O PROGRAMA ME DIZ SE ELA ESTÁ OU NÀO NO MEU CONJUNTO
    string x;
    cin >> x;
    if (c.count(x) > 0)   // RETORNA O NÚMERO DE OCORRÊNCIAS DA STRING X NO CONJUNTO C 
    {
        cout << "PRESENTE" << endl;
    }  



    // PROGRAMA QUE VAI LER MUITOS NÚMEROS DO TECLADO E IMPRIMIR SÓ AQUELES MAIORES QUE ALGUM X
    set<int> n;
    int numero;
    ifstream fin("novaEntrada.txt");
    while(fin >> numero)
    {
        c.insert(numero);
    }
    int y;
    cin >> y;
    ImprimirMaiores(n, y);


    // X PERTENCE AO CONJUNTO SIM OU NÃO
    if(c.find(x) != c.end())
    {

    }


    return 0;
}
