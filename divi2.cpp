#include <iostream>

using namespace std;

int main(){
  
  string num;

  cin >> num;

  long long int len = num.length(), sum=0;

  for(long int i=0; i<len; i++){

    sum += num[i] - '0';
  }

  if(len < 2){

    if((num[len-1] - '0') % 4 == 0)
      cout << 'S' << endl;
    else
      cout << 'N' << endl;
    

    if(sum % 9 == 0)
      cout << 'S' << endl;
    else
      cout << 'N' << endl;

    if((num[0] == '0'))
      cout << 'S' << endl;
    else
      cout << 'N' << endl;

  }else{
    if(((num[len-1] - '0')+((num[len-2]-'0')*10) % 4 == 0) || (num[len-1] == '0' && num[len-2] == '0') )
      cout << 'S' << endl;
    else
      cout << 'N' << endl;
    

    if(sum % 9 == 0)
      cout << 'S' << endl;
    else
      cout << 'N' << endl;

    if( (((num[len-1] - '0') + (num[len-2] - '0')*10) % 25 == 0) || (num[len-1] == '0' && num[len-2] == '0') )
      cout << 'S' << endl;
    else
      cout << 'N' << endl;
  }

  return 0;
}