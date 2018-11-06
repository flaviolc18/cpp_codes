#include "posicao.h"

Posicao::Posicao(int x, int y) : _x(x), _y(y){}

void Posicao::set_posicao(int x, int y){
  this->_x = x;
  this->_y = y;
}