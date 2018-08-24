#include <iostream>

using namespace std;

long long int mdc(long long int a, long long int b){
  return (b==0 ? a : mdc(b, a%b));
}

long long int mmc(long long int a, long long int b){
  return (a*b)/mdc(a,b);
}

int main(){
  
  long long int a,b;
  cin >> a >> b;
  cout << mmc(a,b) << endl;
  return 0;
}