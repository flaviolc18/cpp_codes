#include "fatorial.h"

int fatorial(int x){
  return (x==0 ? 1 : x*fatorial(x-1));
}