#include <iostream>

using namespace std;

long int N, M;

int get_premio(long int *A, long int *F, long int o){

  //para nao me preocupar com os casos "edges" dentro do loop
  if(o < A[0]) return F[0];
  if(o >= A[N-2]) return F[N-1];

  long int ini=0, fim=N-1, meio;

  //acha a faixa de premiacao do ogro
  for(long int i=0; i<N-1; i++){

    meio = (ini+fim)/2;

    if(o >= A[i-1] && o < A[i]){
      return F[i];
    }else if(o >= A[i-1]){
      ini = meio+1;
    }else if(o < A[i-1]){
      fim = meio-1;
    }else{
      return -1;
    }
  }
}

int main(){
  
  cin >> N >> M;

  //faixas de premiacao (A), premiacoes (F), ogros (O)
  long int A[N-1], F[N], O[M];

  for(long int i=0; i<N-1; i++){
    cin >> A[i];
  }

  for(long int i=0; i<N; i++){
    cin >> F[i];
  }

  for(long int i=0; i<M; i++){
    cin >> O[i];
    cout << get_premio(A, F, O[i]) << " ";
  }

  cout << endl;
  return 0;
}