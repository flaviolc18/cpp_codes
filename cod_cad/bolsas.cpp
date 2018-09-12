#include <iostream>
#include <algorithm>

using namespace std;

struct Pedido{
  //duracao
  int t;
  //entrega
  int d;
};

bool fator(Pedido a, Pedido b){

  return a.d < b.d;
}

int main(){

  int N, atraso=0, comeco=0;

  cin >> N;

  Pedido pedidos[N];

  for(int i=0; i<N; i++){

    cin >> pedidos[i].t >> pedidos[i].d;
  }

  sort(pedidos, pedidos+N, fator);

  for(int i=0; i<N; i++){

    atraso = max(atraso, (comeco+pedidos[i].t)-pedidos[i].d );
    comeco = comeco+pedidos[i].t;
  }

  cout << atraso << endl;

  return 0;
}