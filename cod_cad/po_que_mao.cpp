#include <iostream>

using namespace std;

int main() {
  int N,X,Y,Z;

  cin >> N >> X >> Y >> Z;

  int menor = min( X, min( Y, Z ) );
  int maior = max( X, max( Y, Z ) );
  int total = X + Y + Z;

  int count = 0;
  
  if ( N >= total ) {
    count = 3;
  } else {
    if ( N >= total - maior ) {
      count = 2;
    } else {
      if ( N >= menor )
  count = 1;
    }
  }
  
  cout << count << endl;
  
  return 0;
}