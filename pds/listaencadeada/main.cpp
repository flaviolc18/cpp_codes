#include <iostream>
#include "listaencadeada.h"

using namespace std;

int main(){
    ListaEncadeada l;
    l.insere_elemento(10);
    l.insere_elemento(20);
    l.insere_elemento(30);
    l.insere_elemento(40);
    l.insere_elemento(50);

    cout << l.get_iesimo(5) << endl;

    l.imprimir();

    l.remover_elemento();

    l.imprimir();

    l.insere_elemento(50);
    cout << l.get_iesimo(4) << endl;

    l.imprimir();

    l.remover_iesimo(4);

    l.imprimir();

    l.inserir_iesimo(40,4);

    l.imprimir();

    l.remover_primeiro();

    l.imprimir();

    l.insere_primeiro(10);

    l.imprimir();

    return 0;
}