// TIPOS ABSTRATOS DE DADOS 

// - Extensão de tipos *primitivos* de dados

// - Paradigma de *modelagem* de sistemas 
//   - onde os procedimentos estão intrinsecamente associados aos dados sob o qual eles operam 


// DIDÁTICA EMPREGADA 
// - Aprender a utilizar TADs da STL 
// - Entender as vantagens e desvantagens 
// -
// -


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
    // string x = a + " " + b;
    cout << a << endl;
    cout << a.size() << endl;


    return 0;
}