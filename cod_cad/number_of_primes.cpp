#include <iostream>

using namespace std;

bool is_prime(long int x){

  if(x < 2) return false;
  for(long int i=2; i*i<=x; i++){
    if(x%i==0)
      return false;
  }
  return true;
}

int main(){
  
  long int n;
  cin >> n;

  for(long int i=2; i<=n; i++){
    if(is_prime(i))
      cout << i << " ";
  }
  cout << endl;

  return 0;
}