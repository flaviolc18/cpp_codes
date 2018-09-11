#ifndef PDS2_LISTADUPLA_H
#define PDS2_LISTADUPLA_H

#include <iostream>

  using namespace std;

  struct node_t {
    int _elem;
    node_t *_ant;
    node_t *_prox;
  };

  class ListaEncadeada {
    private:
      node_t *_ini;
      node_t *_fim;
      int _num_elem;
    
    public:
      ListaEncadeada();
      ~ListaEncadeada();
      void insere_elemento(int e);
      void insere_primeiro(int e);
      int get_iesimo(int i);
      int get_iesimo_r(int i);
      void remover_elemento();
      void remover_primeiro();
      void inserir_iesimo(int e, int i);
      void remover_iesimo(int i);
      int tamanho();
      void imprimir();
      int k_esimo(bool direcao, int k);

      
  };
#endif