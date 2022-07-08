// essa é a terceira aula sobre herança 
// 
// 
// agora vamos falar de interface

// interface é a extensão do que é uma classe 
// interface é um modelo de como ula classe deve acontecer 

// ex no código abaixo: tenho 3 classes conta diferentes e quero padroniazr os metódos que elas devem ter 



#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Conta  // fazendo a interface == classe abstrata 
{
    public:
        virtual float saldo() const = 0;  // vou implementar os métodos só nas classes concretas posteriormente
        virtual int numero() const = 0;
        virtual void DefinirSaldo(float valor) = 0;
        virtual void Depositar(float valor) = 0;
        virtual bool Sacar(float valor) = 0;   // agora, para uma classe ser do tipo Conta, tem que ter esses métodos implementados
};  // agora eu posso descrever formalmente as funcionalidades que uma classe tem que ter no próprio código
// esse é um tipo de herança muito mais simples
// a minha interface diz o que cada método tem que fazer e cada classe que quer herdar dela tem que implementar todos esse métodos 
// agora não temos subclasse de subclasse
// o objetivo aqui não é reaproveitamento de código como antes
// o objetivo aqui é a padronização das classes herdadas

// outra grande vantagem de usar interface é que a gente pode fazer polimorfismo de subtipo novamente, pois agora todas as classes herdam da minha classe Conta
// então, eu posso fazer uma funcao que recebe um ponteiro ou referencia para um tipo Conta que vai conseguir entender dados de quaisquer classes herdadas
// ex:
// void Imprimir(const Conta& c)
// {
//     cout << c.numero() << ": " << c.saldo() << endl;
// }



class ContaSimples : public Conta // agora a ContaSimples herda de Conta, então ela precisa implementar todos os métodos de Conta
{
    private:
        int numero_;
        float saldo_;
    public: 
        ContaSimples(int numero) : numero_(numero), saldo_(0.0) {
        }
        
}



void Imprimir(const Conta& c)
{
    cout << c.numero() << ": " << c.saldo() << endl;
}




int main()
{
    ContaSimples cs(11);
    cs.Depositar(100.00);
    Imprimir(cs);

    ContaInternacional ci(22);
    ci.Depositar(1000.00);
    ci.DepositarEmDolar();

    return 0;
}