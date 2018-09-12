#include <iostream>
#include <cstring>

#define MAXN 100000001

using namespace std;

long int mdc(long int a, long int b){
  if(m[a][b] != -1)
    return m[a][b];
  return (b==0 ? a : (m[a][b] = mdc(b, a%b)));
}

long int mmc(long int a, long int b){
  return ((a*b)/mdc(a,b));
}

long int** aloc_m(long int row, long int col){
  long int** m = new long int*[row];
  for (long int i = 0; i < row; ++i)
    m[i] = new long int[col];
  return m;
}
void delete_m(long int** m, long int row){
  for (long int i = 0; i < row; ++i)
    delete [] m[i];
  delete [] m;
}

int main(){
  /* code */

  long int a,b,c,d,e,f,g,n;
  cin >> a >> b >> c >> d;

  n = max(max(a,b), max(c,d));
  long int **m = aloc_m(n,n);
  memset(m, -1, sizeof(m));

  for(int i=0;i<n; i++){
    for(int j=0;j<n; j++){
    }
  }
  cout << m[0][0] << endl;


  f = mmc(b, d);

  e = ((b/f)*a) + ((d/f)*c);

  while((g=mdc(e, f)) != 1){
    e = e/g;
    f = f/g;
  }

  cout << e << " " << f << endl;

  delete_m(m, n);

  return 0;
}