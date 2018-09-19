#ifndef PDS2_NODE_H
#define PDS2_NODE_H
#include "listaencadeada.h"

class Node {
private:
    Node *_esq;
    Node *_dir;
    int _elem;
public:
    Node(int e);
    ~Node();
    void inserir_elemento(int e);
    bool existe_elemento(int e);
    void imprimir();
    ListaEncadeada pre_ordem();
    ListaEncadeada em_ordem();
    ListaEncadeada pos_ordem();
};
#endif