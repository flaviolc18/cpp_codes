#include <iostream>
#include <algorithm>

using namespace std;

int main(){

  int N, len=0;
  cin >> N;

  int v[N], w[N], f[N];
  for(int i=0; i<N; i++){
    cin >> v[i];
    w[i] = v[i];
  }

  sort(w, w+N);

  for(int i=0; i<N; i++){
    if(w[i] != v[i]){
      f[len] = w[i];
      len++;
    }
  }
  cout << len << endl;
  for(int i=0; i<len; i++){
    cout << f[i] << " ";
  }
  cout << endl;
  return 0;
}