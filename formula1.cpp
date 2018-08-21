#include <iostream>
#include <algorithm>

using namespace std;

//sist de pontuacao
class Pontuacao{
  public:
    ~Pontuacao(){
      delete[] ptos;
    }
    int ult;
    int* ptos;
};

class Piloto{
  public:
    Piloto()
    :ptos(0)
    {}
    ~Piloto(){
      delete[] col_p;
    }
    int num;
    int ptos;
    int* col_p;
};

//piloto a vem antes de b se...
bool fator(Piloto a, Piloto b){

  //o maior na pontuacao
  if(a.ptos > b.ptos){
    return true;
  //se pontuacao igual
  }else if(a.ptos == b.ptos){

    //o menor identificador
    if(a.num < b.ptos){
      return true;
    }
    return false;
  }
  return false;
}

int main(){
  int G, P, S, K, col, ult_pto_p, count_p;
  while(1){

    cin >> G >> P;
    if(G == 0 && P == 0){
      break;
    }

    Piloto pilotos[P];

    for(int i=0; i<P; i++){
      pilotos[i].col_p = new int[G];
      pilotos[i].num = i+1;
    }

    for(int i=0; i<G; i++){
      for(int j=0; j<P; j++){
        cin >> col;
        pilotos[j].col_p[i] = col;
      }
    }

    cin >> S;
    Pontuacao pont[S];

    for(int i=0; i<S; i++){

      cin >> K;
      pont[i].ult = K;
      pont[i].ptos = new int[K];
      for(int j=0; j<K; j++){

        cin >> pont[i].ptos[j];
      }
    }

    //para cada sist. pontuacao
    for(int i=0; i<S; i++){
      //para cada piloto
      for(int j=0; j<P; j++){
        pilotos[j].ptos = 0;
        //para cada corrida
        for(int k=0; k<G; k++){
          //se colocacao piloto <= a ultimo nivel de pontuacao da corrida
          if(pilotos[j].col_p[k] <= pont[i].ult){
            //menos um para mapear pois o nosso array comeca em 0 e as colocacoes em 1
            pilotos[j].ptos += pont[i].ptos[pilotos[j].col_p[k] - 1];
          }
        }
      }

      sort(pilotos, pilotos+P, fator);

      //acha o numero de campeoes
      ult_pto_p = pilotos[0].ptos;
      count_p = 1;
      for(int p=1; p<P; p++){
        if(ult_pto_p != pilotos[p].ptos){
          break;
        }
        count_p++;
      }

      //printa todos os campeoes
      for(int camp=0; camp<count_p; camp++){
        cout << pilotos[camp].num << " ";
      }

      cout << endl;
    }//para cada sist. pontuacao

  }//while true
  return 0;
}