#include "doctest.h"
#include "triangulo.h"

TEST_CASE("Teste VPL - Equilatero")
{
    Triangulo t(5, 5, 5);
    int tipo = t.determinar_tipo();
    CHECK_EQ(tipo, EQUILATERO);
}

TEST_CASE("Teste VPL - Escaleno")
{
    Triangulo t(5, 4, 3);
    int tipo = t.determinar_tipo();
    CHECK_EQ(tipo, ESCALENO);
}

TEST_CASE("Teste VPL - Isosceles")
{
    Triangulo t(5, 4, 4);
    int tipo = t.determinar_tipo();
    CHECK_EQ(tipo, ISOSCELES);
}

TEST_CASE("Teste VPL - Excecao x Negativo")
{
    CHECK_THROWS(new Triangulo(-5, 5, 5));
}

TEST_CASE("Teste VPL - Excecao y Negativo")
{
    CHECK_THROWS(new Triangulo(5, -5, 5));
}

TEST_CASE("Teste VPL - Excecao z Negativo")
{
    CHECK_THROWS(new Triangulo(5, 5, -5));
}

TEST_CASE("Teste VPL - Excecao condicao de existencia x")
{
    CHECK_THROWS(new Triangulo(8, 3, 4));
}

TEST_CASE("Teste VPL - Excecao condicao de existencia y")
{
    CHECK_THROWS(new Triangulo(3, 8, 4));
}

TEST_CASE("Teste VPL - Excecao condicao de existencia z")
{
    CHECK_THROWS(new Triangulo(4, 3, 8));
}

TEST_CASE("Teste VPL - Mensagem da excecao")
{
    try
    {
        Triangulo t(-5, -5, -5);
    }
    catch (TrianguloInvalidoException e)
    {
        CHECK(std::string(e.what()) == "Os parâmetros devem ser positivos");
    }
}