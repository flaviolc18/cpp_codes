#include <iostream>
#include "aquecedor.h"

using namespace std;

int main(){

  Aquecedor aq;

  cout << aq.get_temperatura() << endl;

  aq.resfriar();
  cout << aq.get_temperatura() << endl;

  aq.aquecer();
  cout << aq.get_temperatura() << endl;

  return 0;
}