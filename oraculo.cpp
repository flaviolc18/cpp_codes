#include <iostream>
#include <cmath>

using namespace std;

long long int fatorial(long long int n, long long int k){
  long long r, k2=k, n2=n, count=1;
  while((n-k2) > 0){
    n2 *= (n-k2);
    count++;
    k2 = count*k;
  }
  return n2;
}

int main(){
  
  long long int N, K, T, len, num_int;
  string str;
  cin >> T;

  for (int i = 0; i < T; ++i){
    /* code */
    cin >> str;
    len = str.length();
    K=0;
    N=0;

    long int j=1;
    while(str[len-j] == '!'){
      K++;
      j++;
    }
    num_int = len - K;

    for(j=0; j<num_int; j++){
      N += (str[j]-'0')*pow(10, num_int-j-1);
    }

    cout << fatorial(N,K) << endl;
  }
  return 0;
}