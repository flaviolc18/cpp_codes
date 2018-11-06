#include "torre.h"

Torre::Torre(int x, int y) : Peca("♜", x, y) {}

bool Torre::pode_mover(int x, int y){
  return (x == 0 || y == 0) && this->valida_movimento(x, y);
}