#include <iostream>
#include <string>
#include <vector>

using namespace std;

class SuperClasse
{
    public:
        SuperClasse()
        {
            cout << "Construtor da SuperClasse" << endl;
        }

        virtual ~SuperClasse()  // tem que ser virtual se alguem for herdar dela 
        {
            // "Destrutor da SuperClasse" << endl;
        }

};

class SubClasse : public SuperClasse
{
    public:
        SubClasse()
        {
            cout << "Construtor da SubClasse" << endl;
        }

        ~SubClasse()
        {
            cout << "Destrutor da SubClasse" << endl;
        }
};

int main()
{
    SubClasse y
    SubClasse* x = new ;

    return 0;
}