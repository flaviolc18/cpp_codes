#include "posicao.h"

Posicao::Posicao(int x, int y) : _x(x), _y(y) {}

void Posicao::set_posicao(int x, int y)
{
  this->_x = x;
  this->_y = y;
}

bool Posicao::operator<(const Posicao &p) const { return (_x < p._x) || (_x == p._x && _y < p._y); }

bool Posicao::operator==(const Posicao &p) const { return _x == p._x && _y == p._y; }
