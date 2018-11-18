#ifndef POSICAO_H
#define POSICAO_H

struct Posicao
{

  int _x, _y;
  Posicao(int x, int y);
  void set_posicao(int x, int y);
  bool operator<(const Posicao &p) const;
  bool operator==(const Posicao &p) const;
};

#endif