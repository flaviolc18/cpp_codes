#include <iostream>
#include "listaencadeada.h"

#define CHECK(a) (a == true)

using namespace std;

int main(){

    ListaEncadeada lista; //chamando lista via construtor vazio
    lista.insere_elemento(1);
    lista.insere_elemento(1);
    lista.insere_elemento(2);
    lista.insere_elemento(1);
    lista.insere_elemento(2);
    lista.insere_elemento(2);
    lista.insere_elemento(3);
    lista.insere_elemento(1);
    lista.insere_elemento(3);
    lista.insere_elemento(3);
    lista.insere_elemento(3);
    lista.insere_elemento(2);
    
    int element1 = lista.get_iesimo(0);
    int element2 = lista.get_iesimo(1);
    int element3 = lista.get_iesimo(2);
    int element4 = lista.get_iesimo(3);
    int element5 = lista.get_iesimo(4);
    int element6 = lista.get_iesimo(5);
    int element7 = lista.get_iesimo(6);
    int element8 = lista.get_iesimo(7);
    
    cout << CHECK(element1 == 1);
    cout << CHECK(element2 == 2);
    cout << CHECK(element3 == 1);
    cout << CHECK(element4 == 2);
    cout << CHECK(element5 == 3);
    cout << CHECK(element6 == 1);
    cout << CHECK(element7 == 3);
    cout << CHECK(element8 == 2) << endl;

    lista.imprimir();

    return 0;
}