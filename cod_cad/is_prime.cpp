#include <iostream>

using namespace std;

bool is_prime(long int x){
  if(x==1) return false;
  for(long int i=2; i*i<=x; i++){
    if(x%i == 0)
      return false;
  }
  return true;
}

int main(){
  
  long int x;
  cin >> x;
  cout << (is_prime(x) ? 'S' : 'N') << endl;
  return 0;
}