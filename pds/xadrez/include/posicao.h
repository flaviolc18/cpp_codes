#ifndef POSICAO_H
#define POSICAO_H

struct Posicao
{

  int _x, _y;
  Posicao(int x, int y);
  void set_posicao(int x, int y);

  bool operator<(const Posicao &p1)
  {
    return this->_y < p1._y;
  }
};

#endif