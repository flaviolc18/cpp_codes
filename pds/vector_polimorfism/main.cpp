#include <string.h>
#include <iostream>

#include "package.h"
#include "twodaypackage.h"
#include "overnightpackage.h"
#include "destinationpackages.h"

using namespace std;

#define TEST_CASE(s)(cout << s << endl)
#define CHECK(a) (cout << (a == true) << endl)

int main(){

  DestinationPackages d;
  Package p(1,2,"test1", "test2");
  Package p2(3,4,"test3", "test4");
  Package p3(5,6,"test5", "test6");
  d.add_package(&p);
  d.add_package(&p2);
  d.add_package(&p3);

  for (auto it = d._packs.begin(); it != d._packs.end(); it++) {
      //cout << it->first << endl;

      for (Package *p : it->second){
        cout << p->get_nome() << endl; 
      }
  }

  cout << "testando funcao" << endl;

  cout << d.custo_total() << endl;

  return 0;
}