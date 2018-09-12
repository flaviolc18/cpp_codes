#include <iostream>
#include <algorithm>

using namespace std;

int main(){

  int N;
  cin >> N;

  int seq[N];

  for(int i=0; i<N; i++){
    cin >> seq[i];
  }

  sort(seq, seq+N);

  for(int i=0; i<N; i++){
    cout << seq[i] << " ";
  }
  cout << "\n";

  return 0;
}