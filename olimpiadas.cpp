#include <iostream>
#include <algorithm>

using namespace std;

class Pais{

  public:
    Pais()
    : ouro(0),
      prata(0),
      bronze(0){

    }
    int num;
    int ouro;
    int prata;
    int bronze;
  };

//a vem antes de b se...
bool fator(Pais a, Pais b){

  if(a.ouro > b.ouro){
    return true;
  } else if(a.ouro < b.ouro){
    return false;
  }else{

    if(a.prata > b.prata){
      return true;
    } else if(a.prata < b.prata){
      return false;
    }else{

      if(a.bronze > b.bronze){
        return true;
      } else if(a.bronze < b.bronze){
        return false;
      }else{

        if(a.num < b.num){
          return true;
        } else{
          return false;
        }
      }
    }
  }
}

int main(){

  int N, M, o, p, b;

  cin >> N >> M;

  Pais paises[N];

  for(int i=0; i<N; i++){

    paises[i].num = i+1;
  }

  for(int i=0; i<M; i++){

    cin >> o >> p >> b;
    paises[o-1].ouro++; 
    paises[p-1].prata++; 
    paises[b-1].bronze++; 
  }

  sort(paises, paises+N, fator);

  for(int i=0; i<N; i++){

    cout << paises[i].num << " ";
  }

  cout << endl;
  return 0;
}