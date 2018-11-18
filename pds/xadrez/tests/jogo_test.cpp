#include "doctest.h"

#include "tabuleiro.h"
#include "peca.h"
#include "peao.h"
#include "bispo.h"
#include "cavalo.h"
#include "torre.h"
#include "rainha.h"
#include "rei.h"

std::string brancas = BRANCAS;
std::string negras = NEGRAS;

TEST_CASE("Testa construtores")
{

  Tabuleiro *t = new Tabuleiro();
  Posicao pos = Posicao(0, 0);
  Peca *p = t->get_peca(pos);
  CHECK_EQ(p->get_x(), 0);
  CHECK_EQ(p->get_y(), 0);
  delete t;
}

TEST_CASE("Testa funcoes da classe Tabuleiro")
{
  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(0, 0);
  CHECK(t.esta_no_tabuleiro(pos));
  Posicao invalid = Posicao(-1, -1);
  CHECK(!t.esta_no_tabuleiro(invalid));

  CHECK_THROWS(t.get_peca(invalid));
  t.printa_tabuleiro();
}

//depois preciso tirar essa excecoes pois as classes pecas serao privadas, ou seja o usuario so tera acesso a classe tabuleiro
TEST_CASE("Testa excecoes de construtores")
{
  CHECK_THROWS(Peao p1(8, 8, brancas, false));
  CHECK_THROWS(Torre p1(8, 8, brancas));
  CHECK_THROWS(Cavalo p1(8, 8, brancas));
  CHECK_THROWS(Bispo p1(8, 8, brancas));
  CHECK_THROWS(Rainha p1(8, 8, brancas));
  CHECK_THROWS(Rei p1(8, 8, brancas));
}

TEST_CASE("Testa Metodos Peoes")
{
  Tabuleiro t = Tabuleiro();

  //testa peao branco
  Posicao pos = Posicao(0, 6);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♟");
  CHECK_EQ(p->get_cor(), brancas);

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 1, 1));

  //movimento valido
  CHECK_NOTHROW(t.move_peca(pos, 0, -1));

  //testa com um peao negro
  Posicao pos3 = Posicao(0, 1);

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos3, 1, -1));

  //movimento valido
  CHECK_NOTHROW(t.move_peca(pos3, 0, 1));
}

TEST_CASE("Testa Metodos Cavalo")
{
  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(1, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♞");
  CHECK_EQ(p->get_cor(), negras);

  //fora do tabuleiro
  CHECK_THROWS(t.move_peca(pos, -1, -2));
  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 2, 2));

  //movimento valido
  CHECK_NOTHROW(t.move_peca(pos, 1, 2));
}

TEST_CASE("Testa Metodos Bispo")
{
  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(2, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♝");
  CHECK_EQ(p->get_cor(), negras);

  //peca na frente
  CHECK_THROWS(t.move_peca(pos, 3, 3));

  //fora do tabuleiro
  CHECK_THROWS(t.move_peca(pos, 1, -1));

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 2, 3));

  //movimento valido
  Posicao pos2 = Posicao(3, 1);
  t.move_peca(pos2, 0, 1);

  CHECK_NOTHROW(t.move_peca(pos, 2, 2));
}

TEST_CASE("Testa Metodos Torre")
{
  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(0, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♜");
  CHECK_EQ(p->get_cor(), negras);

  //peca na frente
  CHECK_THROWS(t.move_peca(pos, 0, 3));

  //fora do tabuleiro
  CHECK_THROWS(t.move_peca(pos, 0, -1));

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 2, 3));

  //movimento valido
  Posicao pos2 = Posicao(0, 1);
  t.move_peca(pos2, 0, 1);

  CHECK_NOTHROW(t.move_peca(pos, 0, 1));
}

TEST_CASE("Testa Metodos Torre")
{
  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(0, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♜");
  CHECK_EQ(p->get_cor(), negras);

  //peca na frente
  CHECK_THROWS(t.move_peca(pos, 0, 3));

  //fora do tabuleiro
  CHECK_THROWS(t.move_peca(pos, 0, -1));

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 2, 3));

  //movimento valido
  Posicao pos2 = Posicao(0, 1);
  t.move_peca(pos2, 0, 1);

  Posicao pos3 = Posicao(0, 2);
  t.move_peca(pos3, 0, 1);

  CHECK_NOTHROW(t.move_peca(pos, 0, 2));

  Posicao pos4 = Posicao(0, 2);
  CHECK_NOTHROW(t.move_peca(pos4, 5, 0));
}

TEST_CASE("Testa Metodos Rainha")
{
  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(3, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♛");
  CHECK_EQ(p->get_cor(), negras);

  //peca na frente
  CHECK_THROWS(t.move_peca(pos, 0, 3));

  //fora do tabuleiro
  CHECK_THROWS(t.move_peca(pos, 0, -1));

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 1, 3));

  //movimento valido
  Posicao pos2 = Posicao(3, 1);
  t.move_peca(pos2, 0, 1);

  Posicao pos3 = Posicao(3, 2);
  t.move_peca(pos3, 0, 1);

  CHECK_NOTHROW(t.move_peca(pos, 0, 2));

  Posicao pos4 = Posicao(3, 2);
  CHECK_NOTHROW(t.move_peca(pos4, -3, 0));

  Posicao pos5 = Posicao(0, 2);
  CHECK_NOTHROW(t.move_peca(pos5, 2, 2));

  Posicao pos6 = Posicao(2, 4);
  CHECK_NOTHROW(t.move_peca(pos6, 2, 0));

  Posicao pos7 = Posicao(4, 4);
  CHECK_NOTHROW(t.move_peca(pos7, 0, -2));

  Posicao pos8 = Posicao(4, 2);
  CHECK_THROWS(t.move_peca(pos8, -1, 1));
}

TEST_CASE("Testa Metodos Rei")
{
  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(4, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♔");
  CHECK_EQ(p->get_cor(), negras);

  //peca na frente
  CHECK_THROWS(t.move_peca(pos, 0, 1));

  //fora do tabuleiro
  CHECK_THROWS(t.move_peca(pos, 0, -1));

  //movimento invalido
  CHECK_THROWS(t.move_peca(pos, 1, 3));

  //movimento valido
  Posicao pos2 = Posicao(4, 1);
  t.move_peca(pos2, 0, 1);

  CHECK_NOTHROW(t.move_peca(pos, 0, 1));

  Posicao pos4 = Posicao(4, 1);
  CHECK_NOTHROW(t.move_peca(pos4, -1, 1));

  Posicao pos5 = Posicao(3, 2);
  CHECK_NOTHROW(t.move_peca(pos5, 1, 1));

  Posicao pos6 = Posicao(4, 3);
  CHECK_NOTHROW(t.move_peca(pos6, 1, 0));

  Posicao pos7 = Posicao(5, 3);
  CHECK_NOTHROW(t.move_peca(pos7, 0, -1));
}