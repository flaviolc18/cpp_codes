#include <iostream>
#include "aquecedor.h"

using namespace std;

void print_class(Aquecedor aq, int num=1){
  cout << "aq" << to_string(num) << ":"  << endl;
  cout << aq.get_temperatura() << endl;
  aq.resfriar();
  cout << aq.get_temperatura() << endl;
  aq.aquecer();
  cout << aq.get_temperatura() << endl;
}

int main(){

  Aquecedor aq1;
  //this would raise an exception
  //Aquecedor aq2(50, 20);
  Aquecedor aq3(30, 20);
  //this would raise another exception when calling 'resfriar()'
  //Aquecedor aq4(30, 21);
  
  print_class(aq1);
  print_class(aq3, 3);  

  return 0;
}