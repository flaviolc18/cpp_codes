#include <iostream>
#include "listaencadeada.h"

#define CHECK(a) (a==true)

using namespace std;

int main(){
    ListaEncadeada lista; //chamando lista via construtor vazio
    lista.insere_elemento(1);
    lista.insere_elemento(2);
    lista.insere_elemento(3);
    lista.insere_elemento(4);
    lista.insere_elemento(3);
    lista.insere_elemento(2);
    lista.insere_elemento(1);
    
    cout << CHECK(lista.checa_palindromo()) << endl;
    
    //removendo elemento do meio, mas lista continua um palíndromo
    lista.remover_iesimo(3);
    cout << CHECK(lista.checa_palindromo()) << endl;
    
    //removendo os dois elementos com valor 3 e lista continua sendo um palíndromo
    lista.remover_iesimo(2);
    lista.remover_iesimo(2);
    cout << CHECK(lista.checa_palindromo()) << endl;
    
    //inserindo elemento pra que lista deixe de ser um palíndromo
    lista.insere_elemento(4); 
    cout << CHECK(!lista.checa_palindromo()) << endl;

    return 0;
}