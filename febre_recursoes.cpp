#include <iostream>
#include <cstring>

#define MAXN 1000100

using namespace std;

long int f[MAXN];

int main(){

  long int n, k, m;

  memset(f, -1, sizeof(f));

  cin >> n >> k >> m;

  long int a[n];

  for(long int i=0; i<n; i++){

    cin >> a[i];
  }

  for(long int i=0; i<n; i++){

    cin >> f[i];
  }

  for(long int i=0; i<k; i++){

    if(f[i] == -1){
      f[i]=0;
      for(long int j=0; j<n; j++){
        f[i] += a[j]*f[i-j-1];
        f[i] = f[i] % m;
      }
    }
  }

  cout << f[k-1] << endl;
  
  return 0;
}