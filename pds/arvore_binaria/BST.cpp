#include <iostream>

#include "BST.h"
#include "listaencadeada.h"

BST::BST(){
  this->_raiz = nullptr;
  this->_num_elementos_inseridos = 0;
}

BST::~BST(){
  if(this->_raiz != nullptr)
    delete this->_raiz;
}

void BST::inserir_elemento(int e){
  if(this->_raiz == nullptr){
    this->_raiz = new Node(e);
    this->_num_elementos_inseridos++;
  }else if(!this->_raiz->existe_elemento(e)){
    this->_raiz->inserir_elemento(e);
    this->_num_elementos_inseridos++;
  }
}

bool BST::existe_elemento(int e){
  if (this->_raiz == nullptr)
    return false;
  return this->_raiz->existe_elemento(e);
}

void BST::imprimir() {
  if (this->_raiz != nullptr) 
    this->_raiz->imprimir();
}

ListaEncadeada BST::pre_ordem(){
  if(this->_raiz != nullptr){
    ListaEncadeada *lista = new ListaEncadeada();
    this->_raiz->add_pre_ordem(lista);
    return *lista;
  }
}

ListaEncadeada BST::em_ordem(){
  if(this->_raiz != nullptr){
    ListaEncadeada *lista = new ListaEncadeada();
    this->_raiz->add_em_ordem(lista);
    return *lista;
  }
}

ListaEncadeada BST::pos_ordem(){
  if(this->_raiz != nullptr){
    ListaEncadeada *lista = new ListaEncadeada();
    this->_raiz->add_pos_ordem(lista);
    return *lista;
  }
}