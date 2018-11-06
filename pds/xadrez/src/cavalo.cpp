#include "cavalo.h"

Cavalo::Cavalo(int x, int y, Tabuleiro* t) : Peca("♞", x, y, t){}

bool Cavalo::pode_mover(int x, int y){

  return (x < 3 && y < 3 && x > -3 && y > -3) && (x+y == 3) && this->valida_movimento(x, y);
}