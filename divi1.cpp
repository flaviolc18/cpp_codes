#include <iostream>

using namespace std;

int main(){

  string num;
  cin >> num;
  long int len = num.length(), sum=0;

  for(int i=0; i<len; i++){

    sum += num[i] - '0';
  }
  
  if((num[len-1] - '0') % 2 == 0)
    cout << 'S' << endl;
  else
    cout << 'N' << endl;

  if(sum % 3 == 0)
    cout << 'S' << endl;
  else
    cout << 'N' << endl;

  if((num[len-1] - '0') % 5 == 0)
    cout << 'S' << endl;
  else
    cout << 'N' << endl;
  
}