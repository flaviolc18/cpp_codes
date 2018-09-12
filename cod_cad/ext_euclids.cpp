#include <iostream>

using namespace std;

int ext_euclids(int a, int b, int *x, int *y){

  if(a==0){
    *x = 0;
    *y = 1;
    return b;
  }

  int x1, y1;
  int mdc = ext_euclids(b%a, a, &x1, &y1);

  *x = y1 - (b/a)*x1;
  *y = x1;
  return mdc;
}

int main(){
  int x,y;
  int a=291,b=144;
  int mdc = ext_euclids(a,b,&x,&y);
  cout << a<<"*"<<x<<"+"<<b<<"*"<<y<<"="<<mdc;
}