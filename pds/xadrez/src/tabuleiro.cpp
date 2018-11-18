#include "tabuleiro.h"
#include "peao.h"
#include "bispo.h"
#include "cavalo.h"
#include "torre.h"
#include "rainha.h"
#include "rei.h"

Tabuleiro::Tabuleiro() : _pecas(new std::map<Posicao, Peca *>)
{
  std::string brancas = BRANCAS;
  std::string negras = NEGRAS;
  this->inicializa_pecas(brancas);
  this->inicializa_pecas(negras);
}

Tabuleiro::~Tabuleiro()
{

  this->delete_pecas();
}

void Tabuleiro::delete_pecas()
{
  for (auto it_peca = this->_pecas->begin(); it_peca != this->_pecas->end(); it_peca++)
  {
    delete it_peca->second;
  }
  delete this->_pecas;
}

bool Tabuleiro::pode_mover(Posicao &p)
{
  if (p._x > 7 || p._x < 0 || p._y > 7 || p._y < 0)
  {
    return false;
  }
  //por enquanto nao vou validar se tem alguma peca no caminho
  auto peca = this->_pecas->find(p);
  return peca == this->_pecas->end();
}

Peca *Tabuleiro::get_peca(Posicao &pos)
{

  auto peca = this->_pecas->find(pos);
  if (peca == this->_pecas->end())
  {
    throw PosicaoSemPecaException("Nao tem peca nessa posicao");
  }
  return peca->second;
}

bool Tabuleiro::tem_peca(int x, int y)
{
  Posicao pos = Posicao(x, y);
  return this->_pecas->find(pos) != this->_pecas->end();
}

void Tabuleiro::inicializa_pecas(std::string &cor)
{
  int initial = cor == BRANCAS ? 7 : 0;
  int acc = cor == BRANCAS ? -1 : 1;
  bool ehPositivo = cor != BRANCAS;

  //inicia os peoes
  for (int i = 0; i < 8; i++)
  {
    Posicao pos = Posicao(i, initial + acc);
    Peao *peao = new Peao(i, initial + acc, cor, ehPositivo);
    auto par = std::make_pair(pos, peao);
    this->_pecas->insert(par);
    //this->_pecas[time][Posicao(i, initial + acc)] = new Peao(i, initial + acc);
  }

  //inicia as torres
  for (int i = 0; i < 8; i += 7)
  {
    Posicao pos = Posicao(i, initial);
    Torre *torre = new Torre(i, initial, cor);
    auto par = std::make_pair(pos, torre);
    this->_pecas->insert(par);
    //this->_pecas[time][Posicao(i, initial)] = new Torre(i, initial);
  }

  //inicia os cavalos
  for (int i = 1; i < 8; i += 5)
  {
    Posicao pos = Posicao(i, initial);
    Cavalo *cavalo = new Cavalo(i, initial, cor);
    auto par = std::make_pair(pos, cavalo);
    this->_pecas->insert(par);
    //this->_pecas[time][Posicao(i, initial)] = new Cavalo(i, initial);
  }

  //inicia os bispos
  for (int i = 2; i < 8; i += 3)
  {
    Posicao pos = Posicao(i, initial);
    Bispo *bispo = new Bispo(i, initial, cor);
    auto par = std::make_pair(pos, bispo);
    this->_pecas->insert(par);
    //this->_pecas[time][Posicao(i, initial)] = new Bispo(i, initial);
  }

  { //inicia a rainha e o rei
    Posicao pos = Posicao(3, initial);
    Rainha *rainha = new Rainha(3, initial, cor);
    auto par = std::make_pair(pos, rainha);
    this->_pecas->insert(par);
    //this->_pecas[time][Posicao(3, initial)] = new Rainha(3, initial);
  }

  {
    Posicao pos = Posicao(4, initial);
    Rei *rei = new Rei(4, initial, cor);
    auto par = std::make_pair(pos, rei);
    this->_pecas->insert(par);
    //this->_pecas[time][Posicao(4, initial)] = new Rei(4, initial);
  }
}

void Tabuleiro::printa_tabuleiro()
{
  std::cout << std::endl;
  std::cout << std::endl;

  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 8; j++)
    {
      Posicao pos = Posicao(j, i);
      try
      {
        Peca *p = this->get_peca(pos);
        std::cout << p->get_nome() << " ";
      }
      catch (std::exception &e)
      {
        std::cout << ". ";
      }
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
}