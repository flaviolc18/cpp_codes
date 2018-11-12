#include "peca.h"

Peca::Peca(std::string nome, int x, int y) : _p(-1,-1) {

  if(x<0 || x>7 || y<0 || y>7){
    throw MovimentoInvalidoException("A peca deve estar em uma das posicoes do tabuleiro (0 >= x,y <= 7)");
  }

  this->_nome = nome;
  this->_p.set_posicao(x,y);
}

void Peca::mover(int x, int y, Tabuleiro* t){
  if(this->pode_mover(x,y, t)){
    this->_p.set_posicao(this->_p._x + x,this->_p._y + y);
  }else{
    throw MovimentoInvalidoException("Movimento Invalido");
  }
}

int Peca::get_x(){
  return this->_p._x;
}

int Peca::get_y(){
  return this->_p._y;
}

std::string Peca::get_nome(){
  return this->_nome;
}

std::string Peca::get_posicao(){
  return "(" + std::to_string(this->_p._x) + ", " + std::to_string(this->_p._y) + ")";
}

bool Peca::valida_movimento(int x, int y, Tabuleiro* t){
  Posicao novo_p(this->_p._x+x, this->_p._y+y);
  return (novo_p._x < 8 && novo_p._y < 8) && t->pode_mover(novo_p);
  
}