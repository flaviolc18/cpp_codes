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
  Peao p1(1, 0, brancas, true);
  Torre t1(0, 0, brancas);
  Cavalo c1(1, 0, brancas);
  Bispo b1(2, 0, brancas);
  Rainha r1(3, 0, brancas);
  Rei r2(4, 0, brancas);
  delete t;
}

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

  //testa com um peao branco
  Posicao pos = Posicao(0, 6);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♟");
  CHECK_EQ(p->get_cor(), brancas);
  CHECK_THROWS(p->mover(1, 1, &t));
  CHECK_NOTHROW(p->mover(0, -1, &t));

  //testa com um peao negro
  Posicao pos2 = Posicao(0, 1);
  Peca *p2 = t.get_peca(pos2);
  CHECK_THROWS(p2->mover(1, -1, &t));
  CHECK_NOTHROW(p2->mover(0, 1, &t));
}

TEST_CASE("Testa Metodos Cavalo")
{
  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(1, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♞");
  CHECK_EQ(p->get_cor(), negras);
  CHECK_NOTHROW(p->mover(1, 2, &t));
  //fora do tabuleiro
  CHECK_THROWS(p->mover(-1, -2, &t));
  //movimento invalido
  CHECK_THROWS(p->mover(2, 2, &t));
}

TEST_CASE("Testa Metodos Bispo")
{
  Tabuleiro t = Tabuleiro();

  Posicao pos = Posicao(2, 0);
  Peca *p = t.get_peca(pos);
  CHECK_EQ(p->get_nome(), "♝");
  CHECK_EQ(p->get_cor(), negras);

  //peca na frente
  CHECK_NOTHROW(p->mover(1, 2, &t));
  //fora do tabuleiro
  CHECK_THROWS(p->mover(-1, -2, &t));
  //movimento invalido
  CHECK_THROWS(p->mover(2, 2, &t));
}