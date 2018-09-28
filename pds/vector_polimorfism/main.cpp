#include <string.h>
#include <iostream>

#include "package.h"
#include "twodaypackage.h"
#include "overnightpackage.h"
#include "destinationpackages.h"

using namespace std;

#define TEST_CASE(s)(cout << s << endl)
#define CHECK(a) (cout << (a == true) << endl)
#define PRINT(a)(cout << a << endl)

int main(){

  DestinationPackages d;
  Package p(1,2,"test1", "test2");
  Package p5(1,2,"test1", "test2");
  Package p6(1,2,"test1", "test2");
  Package p2(3,4,"test3", "test4");
  Package p3(5,6,"test5", "test6");
  d.add_package(&p);
  d.add_package(&p2);
  d.add_package(&p3);
  d.add_package(&p5);
  d.add_package(&p6);

  for (auto it = d._packs.begin(); it != d._packs.end(); it++) {
      cout << it->first << endl;

      for (Package *p : it->second){
        cout << p->get_nome() << endl; 
      }
  }

  cout << "testando funcao total" << endl;
  cout << d.custo_total() << endl;

  cout << "testando funcao especifica" << endl;
  cout << d.custo_total("test1") << endl;


  //TEST CASES

  TEST_CASE("02 - Testando a inserção de pacotes e o custo total por usuário");
  {
      Package *p1 = new Package(2,5, "Josias", "Alfeneiros");
      Package *p2 = new Package(5,5, "Carlos", "Alfeneiros");
      Package *p3 = new Package(4,5, "Maria", "Alfeneiros");
      Package *p4 = new Package(2,5, "Maria", "Alfeneiros");
      Package *p5 = new Package(1,5, "Josias", "Alfeneiros");
     
      DestinationPackages pacotes;
      pacotes.add_package(p1);
      pacotes.add_package(p2);
      pacotes.add_package(p3);
      pacotes.add_package(p4);
      pacotes.add_package(p5);
     
      CHECK(pacotes.custo_total("Josias") == 15);
      CHECK(pacotes.custo_total("Maria") == 30);
      CHECK(pacotes.custo_total("Carlos") == 25);

      PRINT(pacotes.custo_total("Josias"));
      PRINT(pacotes.custo_total("Maria"));
      PRINT(pacotes.custo_total("Carlos"));
     
      delete p1;
      delete p2;
      delete p3;
      delete p4;
      delete p5;
  }

  TEST_CASE("03 - Testando o cálculo de custo total de pacotes");
  {
      Package *p1 = new Package(2,5, "Josias", "Alfeneiros");
      Package *p2 = new Package(5,5, "Carlos", "Alfeneiros");
      Package *p3 = new Package(4,5, "Maria", "Alfeneiros");
      Package *p4 = new Package(2,5, "Maria", "Alfeneiros");
      Package *p5 = new Package(1,5, "Josias", "Alfeneiros");
     
      DestinationPackages pacotes;
      pacotes.add_package(p1);
      pacotes.add_package(p2);
      pacotes.add_package(p3);
      pacotes.add_package(p4);
      pacotes.add_package(p5);
     
      CHECK(pacotes.custo_total() == 70);
     
      delete p1;
      delete p2;
      delete p3;
      delete p4;
      delete p5;
  }

  TEST_CASE("04 - Checando um custo nulo para uma chave não presente no map; e para um map vazio");
  {
      Package *p1 = new Package(2,5, "Josias", "Alfeneiros");
      Package *p2 = new Package(5,5, "Carlos", "Alfeneiros");
      Package *p3 = new Package(4,5, "Maria", "Alfeneiros");
      Package *p4 = new Package(2,5, "Maria", "Alfeneiros");
      Package *p5 = new Package(1,5, "Josias", "Alfeneiros");
     
      DestinationPackages pacotes;
      DestinationPackages pacotes2;
      pacotes.add_package(p1);
      pacotes.add_package(p2);
      pacotes.add_package(p3);
      pacotes.add_package(p4);
      pacotes.add_package(p5);
     
      CHECK(pacotes.custo_total("Marcos") == 0);
      CHECK(pacotes2.custo_total()==0);
     
      delete p1;
      delete p2;
      delete p3;
      delete p4;
      delete p5;
  }


  TEST_CASE("05 - Inserção de membros de classes derivadas e cálculo de custo polimorficamente");
  {
     
      Package *p1 = new OverNightPackage(2, 5, 7, "Maria", "Rio");
      Package *p2 = new OverNightPackage(3, 2, 1, "Paulo", "Juazeiro");
      Package *p3 = new TwoDayPackage(5, 2, 4, "Josias", "Juazeiro");
      Package *p4 = new TwoDayPackage(2, 5, 3, "Maria", "Juazeiro");
      Package *p5 = new Package(5, 7, "Paulo", "Juazeiro");

      DestinationPackages pacotes;
      pacotes.add_package(p1);
      pacotes.add_package(p2);
      pacotes.add_package(p3);
      pacotes.add_package(p4);
      pacotes.add_package(p5);
     
      CHECK(pacotes.custo_total("Josias") == 14);
      CHECK(pacotes.custo_total("Maria") == 37);
      CHECK(pacotes.custo_total("Paulo") == 44);
      CHECK(pacotes.custo_total() == 95);
     
      delete p1;
      delete p2;
      delete p3;
      delete p4;
      delete p5;
  }

  return 0;
}