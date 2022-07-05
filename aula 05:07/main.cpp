// na aula passada começamos a ver herança 
// nessa aula 


#include <iostream>
#include <string>
#include <vector>

using namespace std;


class Conta 
{
    // private: 
    // protected:  // é a mesma coisa que private, exceto para subclasses (elas podem acessar as variavéis privadas), mas não é uma boa prática
    private:
        int numero_;
        float saldo_;
    public:
        Conta(int numero) : numero_(numero), saldo_(0.0)   // outro modo de inicializador, para inicializar a variável assim que ela for declarada
        {
        //     numero_ = numero;
        //     saldo = 0.0;
        }

        float saldo() const   // coloquei como const pois ele nao altera o valor dos atributos dessa classe, nao aletra o estado da classe
        {
            return saldo_;
        }

        int numero() const // to garantindo que esse método NÃO PODE ALTERAR OS VALORES DO ATRIBUTOS  
        {
            return numero_;
        }

        void Depositar(float valor)
        {
            saldo_ = saldo_ + valor;
        }

        bool Sacar(float valor)
        {
            if(valor > saldo)
            {
                return false;
            } else 
            {
                saldo_ = saldo_ - valor;
                return true;
            }
        }
}


class ContaInternacional() : public Conta
{
    private:
        float saldo_usd_;   // além dos atributos da classe Conta, pois estou fazendo uma herança dela
    public: 
        ContaInternacional(int numero) : Conta(numero)  // chamando o construtor da superclasse junto do construtor dessa nova subclasse 
        {
            // numero_ = numero;   // mas um não consigo fazer isso, pois esses métodos estão privados na classe Conta, então eu preciso chamar o construtor de Conta junto desse novo construtor
            // saldo_ = 0.0;   // // vc só pode acessar qualquer coisa privada da outra classe através dos métodos públicos dela 
            saldo_usd_ = 0.0;  
        }

        float saldo_em_dolar() const 
        {
            return saldo_usd_;
        }

        void DepositarEmDolar(float valor_usd)
        {
            saldo_usd_ = saldo_usd_ + valor_usd;
        }

        bool SacarEmDolar(float valor_usd_)
        {
            if(valor_usd_ > saldo_usd_)
            {
                return false;
            } else 
            {
                saldo_usd_ = saldo_usd_ - valor_usd_;
                return true;
            }
        }
};




class ContaMista : public ContaInternacional 
{
    private:
        float brl2usd_;
    public:
        ContaMista(int numero, float dolar) : ContaInternacional(numero)
        {
            brl2usd_ = dolar;
        }

        float saldo() const    // reescervendo o método da classe Conta
        {
            return Conta::saldo() + saldo_em_dolar() * brl2usd_;   // Conta::saldo() para utilizar o método da classe Saldo 
        }
}


class ContaEspecial : ContaSimples 
{
    private:
        float limite_;
    public: 
        ContaEspecial(int: numero, float limite) : public ContaSimples(numero)
        {
            limite_ = limite;
        }

        float saldo() const  // sobrescrevendo uma função da superclasse 
        {
            return ContaSimples::saldo() + limite_;
        }
};


void ImprimirSaldo(const Conta& c)
{
    cout << c.numero() << ": " << c.saldo() << endl;
}


int main()
{
    Conta cs(11);
    cs.Depositar(100.00);
    Imprimir(cs);

    ContaInternacional ci(11);
    ci.Depositar(1000.00);
    ci.DepositarEmDolar(200.00);
    Imprimir(ci);  // já estou usando os métodos da classe Conta com minha classe ContaInternacional 

    ContaMista cm(33, 5.00);
    cm.Depositar(10000.00);
    cm.DepositarEmDolar(2000.00);
    Imprimir(cm);  // eu quero que essa função imprimir consiga imprimir o saldo de uma conta mista, ou seja, de maneira diferente que ela faz nas outras classes 

    ContaEspecial ce(22, 2000.00);
    // cout << ce.numero() << ": " << ce.saldo() << endl;
    Imprimir(ce);

    return 0;
}