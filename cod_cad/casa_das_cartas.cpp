#include <iostream>
#include <algorithm>

using namespace std;

int M;

bool fator(int a, int b){
  if((a % M) == (b % M)){
    return a>b;
  }
  return (a % M) > (b % M);
}

int main(){

  int N;
  cin >> N;
  cin >> M;

  int v[N];
  for(int i=0; i<N; i++){
    cin >> v[i];
  }

  sort(v, v+N, fator);

  for(int i=0; i<N; i++){
    cout << v[i] << " ";
  }
  cout <<  endl;
  return 0;
}