#include <iostream>

using namespace std;

long int N, K;

long int busca_casa(long int *casas, long int casa, long int ini, long int fim){

  long int meio;

  //casos edge
  if(casa + casas[fim] == K)
    return fim;

  while(ini <= fim){

    meio = (ini + fim)/2;

    if(casa + casas[meio] == K)
      return casa==casas[meio] ? -1 : meio;
    else if(casa + casas[meio] > K)
      fim = meio-1;
    else if(casa + casas[meio] < K)
      ini = meio+1;
  }
  return -1;
}

int main(){

  cin >> N;

  long int casas[N], casa, casa1, casa2;

  for(long int i=0; i<N; i++){

    cin >> casas[i];
  }
  cin >> K;

  for(long int i=0; i<N; i++){

    casa = busca_casa(casas, casas[i], i, N);
    if(casa != -1){
      casa1 = min(i, casa);
      casa2 = max(i, casa);
      break;
    }
  }

  if(casa != -1)
    cout << casas[casa1] << " " << casas[casa2];

  return 0;
}