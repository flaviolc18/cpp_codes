#include <iostream>
#include <cstring> // lib do memset

#define MAXN 1000100

int n, dp[MAXN];

int fib(int x){

  // se ja calculei, alguma vez o valor de fiv(x)
  if(dp[x] != -1) return dp[x];

  // se nao, calculo a funcao normalmente
  if(x<2) return x;

  // se nao e nenhum dos casos base, atribue e retorno o valor salvo
  return dp[x] = fib(x-1)+fib(x-2);
}

int main(){

  memset(dp, -1, sizeof(dp));

  cin >> n;

  cout << fib(n) << endl;
  
  return 0;
}