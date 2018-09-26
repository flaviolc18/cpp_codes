#include <iostream>

#include "forma.h"
#include "forma2d.h"
#include "forma3d.h"
#include "cubo.h"

using namespace std;

int main(){
    
  Cubo c1(5, "cor1", "nome1");

  Forma3D *p = &c1;

  cout 
  << c1.get_cor() 
  << " " 
  << c1.get_nome()
  << " "
  << c1.get_volume() 
  << endl;

  cout 
  << p->get_cor() 
  << " " 
  << p->get_nome()
  << " "
  << p->get_volume() 
  << endl;


  return 0;
}