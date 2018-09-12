#include <iostream>

#define MAXN 1000100

int fib[MAXN], n;

int main(){

  cin >> n;

  // casos bases
  fib[0] = 0;
  fib[1] = 1;

  // dp na bottom up
  for(int i=2; i<n; i++){
    fib[i] = fib[i-1]+fib[i-2];
  }

  cout << fib[n] << endl;

  return 0;
}