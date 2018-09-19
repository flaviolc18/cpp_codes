#include <iostream>

#include "node.h"

Node::Node(int e){
  this->_esq = nullptr;
  this->_dir = nullptr;
  this->_elem = e;
}

Node::~Node(){
  if(this->_esq != nullptr)
    delete this->_esq;
  if(this->_dir != nullptr)
    delete this->_dir;
}

void Node::inserir_elemento(int e){
  if(e < this->_elem){
    if(this->_esq == nullptr){
      this->_esq = new Node(e);
    }else{
      this->_esq->inserir_elemento(e);
    }
  }else if(e > this->_elem){
    if(this->_dir == nullptr){
      this->_dir = new Node(e);      
    }else{
      this->_dir->inserir_elemento(e);
    }
  }
}

bool Node::existe_elemento(int e){
  if(e < this->_elem){

    if(this->_esq != nullptr)
      return this->_esq->existe_elemento(e);

    return false;
  }else if(e > this->_elem){

    if(this->_dir != nullptr)
      return this->_dir->existe_elemento(e);

    return false
  }
  return true;
}

void Node::imprimir(){
  if(this->_esq != nullptr)
    this->_esq->imprimir();
  
  cout << this->_elem << endl;
  if(this->_dir != nullptr)
    this->_dir->imprimir();
  
}
