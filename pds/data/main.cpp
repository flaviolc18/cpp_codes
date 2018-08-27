#include <iostream>

#include "data.h"

int main(){

  Data data(8, 7, 2014);

  cout << data.get_dia() << endl;
  cout << data.get_mes() << endl;
  cout << data.get_ano() << endl;
  cout << data.get_data_curto() << endl;
  cout << data.get_data_longo() << endl;

  return 0;
}