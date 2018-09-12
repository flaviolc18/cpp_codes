#include "listaencadeada.h"

ListaEncadeada::ListaEncadeada(){
    this->_ini = nullptr;
    this->_fim = nullptr;
    _num_elem = 0;
}

ListaEncadeada::~ListaEncadeada(){
    node_t *ant = nullptr;
    node_t *prox = this->_ini;
    while(prox != nullptr){
        ant = prox;
        prox = prox->_prox;
        delete ant;
    }
}

void ListaEncadeada::insere_elemento(int e){
    node_t *node = new node_t();
    node->_elem = e;
    node->_prox = nullptr;
    node->_ant = nullptr;
    if(this->_ini == nullptr){
        this->_ini = node;
        this->_fim = node;
    }else{
        this->_fim->_prox = node;
        node->_ant = this->_fim;
        this->_fim = node;
    }
    this->_num_elem++;
}

void ListaEncadeada::insere_primeiro(int e){
    node_t *node = new node_t();
    node->_elem = e;
    node->_ant = nullptr;
    node->_prox = nullptr;
    
    if(this->_ini == nullptr){
        this->_ini = node;
        this->_fim = node;
    }else{
        this->_ini->_ant = node;
        node->_prox = this->_ini;
        this->_ini = node;
    }
    this->_num_elem++;
}

int ListaEncadeada::get_iesimo(int i){
    if(i >= this->_num_elem){return -1;}
    int count = 0;
    node_t *node = this->_ini;
    while(count<i){
        node = node->_prox;
        count++;
    }
    return node->_elem;
}

void ListaEncadeada::remover_elemento(){
    if(this->_num_elem == 0)
        return;

    node_t *node = this->_fim;
    if(this->_num_elem == 1){
      this->_ini = nullptr;
      this->_fim = nullptr;
    }else{
      this->_fim = this->_fim->_ant;
      this->_fim->_prox = nullptr;
    }
    
    delete node;
    this->_num_elem--;
}

void ListaEncadeada::remover_primeiro(){
    if(this->_num_elem == 0)
      return;

    node_t *node = this->_ini;
    if(this->_num_elem == 1){
      this->_ini = nullptr;
      this->_fim = nullptr;
    }else{
      this->_ini = this->_ini->_prox;
      this->_ini->_ant = nullptr;
    }
    
    delete node;
    this->_num_elem--;
}

void ListaEncadeada::inserir_iesimo(int e, int i){
    //so deixa adicionar ate o num de elem +1
    if(i>=this->_num_elem+1){return;}

    if(i==0){
      this->insere_primeiro(e);
      return;
    }else if(i==this->_num_elem){
      this->insere_elemento(e);
      return;
    }
    
    node_t *node = new node_t();
    node->_elem = e;
    node->_prox = nullptr;
    node->_ant = nullptr;

    node_t *point = this->_ini;
    int count = 0;
    while(count<i){
        point = point->_prox;
        count++;
    }

    node->_prox = point;
    node->_ant = point->_ant;
    point->_ant->_prox = node;
    point->_ant = node;
    
    this->_num_elem++;
}

void ListaEncadeada::remover_iesimo(int i){
  if(i >= this->_num_elem){return;}

  if(i==this->_num_elem-1){
    this->remover_elemento();
    return;
  }else if(i==0){
    this->remover_primeiro();
    return;
  }

  node_t *point = this->_ini;

  int count = 0;
  while(count<i){
    point = point->_prox;
    count++;
  }

  point->_ant->_prox = point->_prox;
  point->_prox->_ant = point->_ant;

  delete point;
  this->_num_elem--;
}

void ListaEncadeada::imprimir() {
  node_t *atual = this->_ini;
  while (atual != nullptr) {
    std::cout << atual->_elem << " ";
    atual = atual->_prox;
  }
  std::cout << std::endl;
}

int ListaEncadeada::tamanho(){
  return this->_num_elem;
}

bool ListaEncadeada::palindromo(node_t *p1, node_t *p2, int r){
  for(int i=0; i<r; i++){
    if(p1->_elem != p2->_elem)
      return false;

    p1 = p1->_ant;
    p2 = p2->_prox;
  }
  return true;
}

bool ListaEncadeada::checa_palindromo(){
  int n = this->_num_elem;
  node_t *p1 = this->_ini;
  for(int i=0; i<(n/2)-1; i++){
    p1 = p1->_prox;
  }
  node_t *p2 = (n%2==0) ? p1->_prox : p1->_prox->_prox;
  return palindromo(p1, p2, n/2);
}