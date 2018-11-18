#include "peca.h"
#include "tabuleiro.h"

Peca::Peca(std::string nome, std::string &cor, int x, int y) : _p(-1, -1)
{

  if (x < 0 || x > 7 || y < 0 || y > 7)
  {
    throw MovimentoInvalidoException("A peca deve estar em uma das posicoes do tabuleiro (0 >= x,y <= 7)");
  }

  this->_nome = nome;
  this->_cor = cor;
  this->_p.set_posicao(x, y);
}

Peca::~Peca() {}

void Peca::mover(int x, int y)
{
  this->_p.set_posicao(this->_p._x + x, this->_p._y + y);
}

int Peca::get_x()
{
  return this->_p._x;
}

int Peca::get_y()
{
  return this->_p._y;
}

std::string Peca::get_nome()
{
  return this->_nome;
}

std::string Peca::get_cor()
{
  return this->_cor;
}

std::string Peca::get_posicao()
{
  return "(" + std::to_string(this->_p._x) + ", " + std::to_string(this->_p._y) + ")";
}
