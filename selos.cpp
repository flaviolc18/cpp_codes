#include <iostream>

using namespace std;

bool is_composto(long int x){
  if(x==1) return false;
  long int i;
  for(i=2; i*i<=x; i++){
    if(x%i == 0)
      return true;
  }
  return false;
}

int main(){
    
  long int N;
  cin >> N;

  cout << (is_composto(N) ? 'S' : 'N') << endl;

  return 0;
}