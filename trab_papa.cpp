#include <iostream>
#include <algorithm>
#include <cstring>

#define MAXN 1000001

using namespace std;

class Caixa{
  public:
    long int peso;
    long int resist;
    long int suport;
};

bool fator(Caixa a, Caixa b){

  return a.suport > b.suport;
}

int main(){

  long int N, min_suport, ult_min_suport, count=1, pos_caixa, ult_peso, primeira;

  cin >> N;

  Caixa caixas[N];
  long int caixas_empilhadas[N];

  memset(caixas_empilhadas, -1, sizeof(caixas_empilhadas));

  for(long int i=0; i<N; i++){

    cin >> caixas[i].peso >> caixas[i].resist;
    caixas[i].suport = caixas[i].resist - caixas[i].peso;
  }

  sort(caixas, caixas+N, fator);

  min_suport = caixas[0].suport;
  caixas_empilhadas[0] = 1;
  primeira = 1;

  for(long int j=1; j<N; j++){
    pos_caixa = -1;
    for(long int i=1; i<N; i++){

      //se ela for a primeira ou acharmos uma melhor
      if(
        (primeira 
        && caixas[i].suport >= 0 
        && min_suport >= caixas[i].peso
        )
        ||
        (!primeira
        && caixas[i].suport >= min_suport 
        && caixas[i].peso < ult_peso 
        && caixas_empilhadas[i] == -1)
        ){

        min_suport = ult_min_suport; //preciso do min suport baseado na ultima alteracao da melhor caixa
        min_suport -= caixas[i].peso;
        min_suport = min(min_suport, caixas[i].suport);
        ult_peso = caixas[i].peso;
        pos_caixa = i;
        primeira = 0;
      }
    }
    if(pos_caixa == -1){
      break;
    }
    count++;
    primeira = 1;
    ult_min_suport = min_suport;
    caixas_empilhadas[pos_caixa] = 1;
  }

  

  cout << count << endl;
  return 0;
}