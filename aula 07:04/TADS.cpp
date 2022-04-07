// TIPOS ABSTRATOS DE DADOS 

// - Extensão de tipos *primitivos* de dados

// - Paradigma de *modelagem* de sistemas 
//   - onde os procedimentos estão intrinsecamente associados aos dados sob o qual eles operam 


// DIDÁTICA EMPREGADA 
// - Aprender a utilizar TADs da STL 
// - Entender as vantagens e desvantagens 
// -
// -


// TIPOS ABSTRATOR DE DADOS == CONTRATO

// para definir um tad, vc define quais os valores fazem parte dessa conjunto e quais operacoes vc pode utilizar pra manipular esses dados

// 



#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string a = "Thiago";
    // string b = "Noronha";
    // string x = a + " " + b;
    // cout << x << endl;
    // cout << x.size() << endl;

    string a = "Thiago";
    a.append("Noronha");
    cout << a << endl;
    cout << a.size() << endl;


    return 0;
}