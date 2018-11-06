#include "cavalo.h"

Cavalo::Cavalo(int x, int y) : Peca("♞", x, y){}

bool Cavalo::pode_mover(int x, int y){

  return (x < 3 && y < 3 && x > -3 && y > -3) && (x+y == 3) && this->valida_movimento(x, y);
}