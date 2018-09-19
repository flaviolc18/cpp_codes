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
    void add_pre_ordem(ListaEncadeada *lista);
    ListaEncadeada em_ordem();
    void add_em_ordem(ListaEncadeada *lista);
    ListaEncadeada pos_ordem();
    void add_pos_ordem(ListaEncadeada *lista);
};
#endif