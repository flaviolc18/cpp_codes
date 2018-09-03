#include <iostream>
#include "rectangle.h"

using namespace std;

void print_class(Rectangle rec, int num=1){
  cout << "rec" << to_string(num) << ":"  << endl;
  cout << rec.get_height() << endl;
  cout << rec.get_width() << endl;
  cout << rec.get_perimeter() << endl;
  cout << rec.get_area() << endl;
}


int main(){

  Rectangle rec1;
  Rectangle rec2(5.0, 2.0);

  print_class(rec1);
  print_class(rec2, 2);

  rec1.set_height(20.0);

  print_class(rec1);

  return 0;
}