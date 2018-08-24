#include <iostream>

using namespace std;

long int mdc(long int a, long int b){
  return (b==0 ? a : mdc(b, a%b));
}

int main(){
    
  long int N, mdc_n;
  cin >> N;

  long int nums[N];
  cin >> nums[0];
  mdc_n = nums[0];
  for(long int i=1; i<N; i++){
    cin >> nums[i];
    mdc_n = mdc(mdc_n, nums[i]);
  }

  cout << mdc_n << endl;

  return 0;
}