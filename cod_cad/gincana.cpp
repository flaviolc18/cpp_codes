#include <iostream>

using namespace std;

long long int mdc(long long int a, long long int b){
  return (b==0 ? a : mdc(b, a%b));
}

int main(){
  
  long long int N,M,X;
  cin >> N >> M;

  for(long long int i=M; i>0; i--){
    if(mdc(N, i) == 1){
      X = i;
      break;
    }
  }
  cout << X << endl;
  return 0;
}