#include <iostream>

using namespace std;

long int mdc(long int a, long int b){
  return (b==0 ? a : mdc(b, a%b));
}

long int mmc(long int a, long int b){
  return ((a*b)/mdc(a,b));
}

int main(){
  /* code */

  long int a,b,c,d,e,f,g;
  cin >> a >> b >> c >> d;
  
  f = mmc(b, d);

  e = ((f/b)*a) + ((f/d)*c);

  while((g=mdc(e, f)) != 1){
    e = e/g;
    f = f/g;
  }

  cout << e << " " << f << endl;

  return 0;
}