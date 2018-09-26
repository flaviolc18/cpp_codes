#include <iostream>

#include "forma.h"
#include "forma2d.h"
#include "forma3d.h"
#include "cubo.h"
#include "circulo.h"
#include "esfera.h"
#include "quadrado.h"
#include "triangulo.h"

using namespace std;

#define TEST_CASE(s)(cout << s << endl)
#define CHECK(a) (cout << (a == true) << endl)

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
  Esfera e3("cor3", 3);

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

{
  Quadrado c2("cor4", 5);

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
  Triangulo c2("cor5", 5, 4, 3);

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

TEST_CASE("02 - Acessando métodos das classes base");
{
    Triangulo t("azul", 6, 7, 8);
    CHECK((abs(t.get_area()-20.3331625676))<0.0001);
    CHECK(t.get_perimetro() == 21);
   
    Quadrado q("verde", 4);
    CHECK(q.get_area() == 16);
    CHECK(q.get_perimetro() == 16);
   
    Cubo c("roxo", 4);
    CHECK(c.get_volume() == 64);
   
    Esfera e("amarelo", 3);
    CHECK(abs(e.get_volume()-113.097)<0.01);
   
    Circulo cr("rosa", 2);
    CHECK(abs(cr.get_area()-12.5664)<0.001);
    CHECK(abs(cr.get_perimetro()-12.5664)<0.001);

}

TEST_CASE("03 - Instanciando objetos com classe base");
{
    Triangulo triangulo("azul", 7, 5, 4);
    Quadrado quadrado("vermelho", 7);
    Esfera esfera("roxo", 3);
    Cubo cubo("rosa", 2);
    Circulo circulo("amarelo", 2);
   
    std::string nome1 = "triangulo";
    std::string nome2 = "quadrado";
    std::string nome3 = "esfera";
    std::string nome4 = "cubo";
    std::string nome5 = "circulo";
   
    Forma *poligono1 = &quadrado;
    Forma *poligono2 = &triangulo;
    Forma *poligono3 = &esfera;
    Forma *poligono4 = &cubo;
    Forma *poligono5 = &circulo;
   
    //checando nomes
    CHECK(nome2.compare(poligono1->get_nome())==0);
    CHECK(nome1.compare(poligono2->get_nome())==0);
    CHECK(nome3.compare(poligono3->get_nome())==0);
    CHECK(nome4.compare(poligono4->get_nome())==0);
    CHECK(nome5.compare(poligono5->get_nome())==0);
   
    //checando cores
    CHECK(poligono1->get_cor().compare("vermelho")==0);
    CHECK(poligono2->get_cor().compare("azul")==0);
   
}

TEST_CASE("04 - Acessando métodos das classes filhas");
{
    Triangulo triangulo("azul", 7, 5, 4);
    Quadrado quadrado("vermelho", 7);
    Esfera esfera("roxo", 3);
    Cubo cubo("rosa", 2);
    Circulo circulo("amarelo", 2);
   
    Forma2D *poligono1 = &quadrado;
    Forma2D *poligono2 = &triangulo;
    Forma3D *poligono3 = &esfera;
    Forma3D *poligono4 = &cubo;
    Forma2D *poligono5 = &circulo;
   
    //checando nomes
    CHECK(poligono1->get_area()==49);
    CHECK((abs(poligono2->get_area()-9.79796))<0.001);
    CHECK(abs(poligono3->get_volume()-113.097)<0.01);
    CHECK(poligono4->get_volume()==8);
    CHECK(abs(poligono5->get_area()-12.5664)<0.001);
}

  return 0;
}