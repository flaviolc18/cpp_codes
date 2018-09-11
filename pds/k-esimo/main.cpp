#include <iostream>
#include "listaencadeada.h"

#define CHECK(a) (a==true)

using namespace std;

int main(){
    ListaEncadeada lista1; //chamando lista via construtor vazio
    lista1.insere_elemento(4);
    lista1.insere_elemento(5);
    lista1.insere_elemento(1);
    lista1.insere_elemento(8);
    
    int element1 = lista1.get_iesimo(0);
    int element2 = lista1.get_iesimo(1);
    int element3 = lista1.get_iesimo(2);
    int element4 = lista1.get_iesimo(3);
    
    cout << CHECK(element1 == 4);
    cout << CHECK(element2 == 5);
    cout << CHECK(element3 == 1);
    cout << CHECK(element4 == 8);

    ListaEncadeada lista; //chamando lista via construtor vazio
    lista.insere_elemento(4);
    lista.insere_elemento(7);
    lista.insere_elemento(3);
    lista.insere_elemento(9);
    lista.insere_elemento(6);
    lista.insere_elemento(8);
    lista.insere_elemento(5);
    lista.insere_elemento(1);
    
     element1 = lista.k_esimo(true, 0);
     element2 = lista.k_esimo(true, 1);
     element3 = lista.k_esimo(true, 2);
     element4 = lista.k_esimo(true, 3);
    int element5 = lista.k_esimo(false, 0);
    int element6 = lista.k_esimo(false, 1);
    int element7 = lista.k_esimo(false, 2);
    int element8 = lista.k_esimo(false, 3);
    
    cout << CHECK(element1 == 4);
    cout << CHECK(element2 == 7);
    cout << CHECK(element3 == 3);
    cout << CHECK(element4 == 9);
    cout << CHECK(element5 == 1);
    cout << CHECK(element6 == 5);
    cout << CHECK(element7 == 8);
    cout << CHECK(element8 == 6) << endl;

    cout << (element5);
    cout << element6;
    cout << (element7);
    cout << (element8) << endl;

    lista.imprimir();


    return 0;
}