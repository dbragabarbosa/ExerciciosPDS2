// no diretório include 







// Representa um número complexo
// https://  ...

class Complexo
{
    public:
    //Cria o número complexo 0 + 0i
    Complexo();

    // Cria o número complexo a + 0i
    Complexo(double a);

    // Cria o número complexo a + bi
    Complexo(double a, double b);

    // Retorna a parte real do número complexo corrente 
    double real() const;

    // Retorna a parte imaginária do número complexo 
    double imag() const;

    // Retorna o módulo
}