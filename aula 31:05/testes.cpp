#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
// PARA UTILIZAR O FUNÇÃO MAIN DO DOCTEST, E NÃO UMA FUNÇÃO MAIN IMPLEMENTADA POR MIM
// AGORA, A ÚNICA COISA QUE RPECISO FAZER, SÃO OS TESTES UNITÁRIOS 
// VAMOS IMPLEMENTAR, PARA CADA CASO QUE EU QUERO, UM 'TEST_CASE'

#include <iostream>

#include "doctest.h"

#include "complexo.h"

using namespace std;

// TESTES QUE EU USAVA NA ULTIMA AULA
std::ostream& operator<< (std::ostream& os, const Com...)
{
    if(c.imag() >= 0.0)
    {
        os << c.real() << " + " << c.imag() << "i";
    } else 
    {
        os << c.real() << " - " << -c.imag() << "i";
    }
    return os;
}

bool operator== (Complexo x, Complexo y)
{
    // return fabs(x.real() - y.real()) < 10E-6 && fabs(x.imag() - y.imag() < 10E-6);

    // OU

    return ( x.real() == doctest::Approx(y,real()) ) && ( x.imag() == doctest::Approx(y.imag()) );

}  // precisamos fazer essa conversão sempre para comparar números reais

// CRIANDO UM TEST_CASE
TEST_CASE("Testa Complexo::multiplicar()")  // quando falha, esse nome é o que será exbiido, motivo para ele ser bem representativo
{
    Complexo b(2, 3);  // parte de setup
    Complexo c(-2, -3);
    Complexo x(5, -12);  // x == b * c

    CHECK(b.multiplicar(c) == x;);  // FARÁ UM TESTE, SE FOR VERDADEIRO, NÃO FAZ NADA, SE FOR FALSO, DÁ MENSAGEM DE ERRO
}

TEST_CASE("Testa a propriedade comutativa de Complexo::multiplicar()")
{
    Complexo b(2, 3);
    Complexo c(-2, -3);

    CHECK(b.multiplicar(c) == c.multiplicar(b));
}

TEST_CASE("Testa a multiplicacao por zero")
{
    Complexo zero;
    Complexo c(-2, -3);

    CHECK(c.multiplicar(zero) == zero);  // quanto vc usa check e ele falha, o teste continua e testa os proximos checks 
    // se vc quiser que ele pare caso o check falhe, vc usa REQUIRE no lugar de CHECK 
    // POR EXEMPLO: se der erro nesse require, o teste para e o outro check nem é testado 
    REQUIRE(c.multiplicar(zero) == zero);
    CHECK(zero.multiplicar(c) == zero);
}

TEST_CASE("Testa simétrico")
{
    Complexo b(2, 3);
    Complexo c(-2, -3);
    Complexo d(2, -3);
    Complexo e(-2, 3);

    CHECK(b.simetrico() == c);
    CHECK(c.simetrico() == b);
    CHECK(d.simetrico() == e);
    CHECK(e.simetrico() == d);
}

TEST_CASE("Testa a soma com o simétrico")
{
    Complexo zero;
    Complexo b(2, 3);
    Complexo simetrico(-2, -3);

    CHECK(b.somar(simetrico) == zero);
}