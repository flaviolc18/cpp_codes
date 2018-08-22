#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main(){

  long long N, M, soma=0, tmp, max_d, min_d, ant=0;

  cin >> N >> M;

  long long dist[N];

  for(long long i=0; i<N; i++){

    cin >> tmp;

    max_d = max(tmp, M-tmp);
    min_d = min(tmp, M-tmp);

    if(min_d >= ant){

      dist[i] = min_d;
      soma += min_d;
      ant = min_d;
    }else if(max_d >= ant){

      dist[i] = max_d;
      soma += max_d;
      ant = max_d;
    }else{

      soma = -1;
      break;
    }
  }

  cout << soma << endl;

  return 0;
}