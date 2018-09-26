#include <iostream>

#include "forma.h"
#include "forma2d.h"
#include "forma3d.h"
#include "cubo.h"
#include "circulo.h"
#include "esfera.h"

using namespace std;

int main(){

{
  Cubo c1("cor1", 5);

  Forma3D *p1 = &c1;

  cout 
  << c1.get_cor() 
  << " " 
  << c1.get_nome()
  << " "
  << c1.get_volume() 
  << endl;

  cout 
  << p1->get_cor() 
  << " " 
  << p1->get_nome()
  << " "
  << p1->get_volume() 
  << endl;
}
{
  Circulo c2("cor2", 5);

  Forma2D *p2 = &c2;

  cout 
  << c2.get_cor() 
  << " " 
  << c2.get_nome()
  << " "
  << c2.get_area()
  << " "
  << c2.get_perimetro()
  << endl;

  cout 
  << p2->get_cor() 
  << " " 
  << p2->get_nome()
  << " "
  << p2->get_area()
  << " "
  << p2->get_perimetro()
  << endl;
}

{
  Esfera e3("cor3", 5);

  Forma3D *p3 = &e3;

  cout 
  << e3.get_cor() 
  << " " 
  << e3.get_nome()
  << " "
  << e3.get_volume()
  << endl;

  cout 
  << p3->get_cor() 
  << " " 
  << p3->get_nome()
  << " "
  << p3->get_volume()
  << endl;
}

  return 0;
}