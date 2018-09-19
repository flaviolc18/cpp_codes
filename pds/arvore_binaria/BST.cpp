#include <iostream>

#include "BST.h"

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
  if (this->_raiz != nullptr)
    return false;
  return this->_raiz->existe_elemento(e);
}

void BST::imprimir() {
  if (this->_raiz != nullptr) 
    this->_raiz->imprimir();
}
