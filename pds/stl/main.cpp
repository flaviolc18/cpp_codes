#include <iostream>
#include <string>
#include <map>
#include <iomanip>
#include <locale>

using namespace std;

void transform(string &s){
  for(int i=0; i<s.length(); i++){
    (s[i]=='\n') ? s[i]='\0' : s[i]=tolower(s[i]);
  }
}

int main(){

  map<string, int> m;
  string p;
  int count=0;

  while(cin >> p){
    transform(p);
    if(m.find(p) == m.end()){
      m[p]=1;
    }else{
      m[p]++;
    }
    count++;
  }

  for(map<string, int>::iterator it = m.begin(); it != m.end(); it++){
    cout 
    << it->first << " "
    << it->second << " "
    << fixed
    << setprecision(2)
    << (float)it->second/count
    << endl;
  }
  

  return 0;
}