 
#include <iostream>
#include <string>
#include <map>   // DICIONARIOS
// EM MAP, TEMOS UM VALOR ASSOCIADO A CADA VALOR
// AS CHAVES SÃO ÚNICAS, E QUANDO VC FOR ORDENAR ELE VAI RETORNAR DA MAIOR CHAVE PRA MENOR CHAVE
// UM MAP É UM CONJUNTO DE PARES DE COISAS


// DEVEMOS PENSAR EM MAP COMO UM CONJUNTO,
// TODA VEZ QUE VC PASSSA UMA CHAVA ELE INSERE A CHAVE ASSOCIADA A UM VALOR, E SE A CHAVE JÁ EXISTE, ELE SOBRESCREVE O VALOR DELA


using namespace std;

int main()
{
    map<string>, float> m;

    // // UM JEITO DE INSERIR
    // pair<string, float> par;  // UM PAIR É UM STRUCT, DO TIPO STRING E FLOAR NESSE CASO
    // while(cin >> par.first >> par.second)
    // {
    //     m.insert(par);    // DIFERENTE DO SET, NO MAP QUEREMOS LER MAIS DE UM TIPO DE DADO POR LINHA
    // }

// OUTRA FORME DE INSERIR 
    string nome;
    float saldo;
    while(cin >> nome >> saldo)
    {
        m[nome] = saldo;  // SE JÁ EXISTIR O NOME, O PROGRAMA SOBRESCREVE O SALDO
    }
    cout << m["carlos"] << endl; // RETORNA O SALDO DE CARLOS




    return 0;
}