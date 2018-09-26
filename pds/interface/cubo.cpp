#include "cubo.h"

Cubo::Cubo(double a, string cor, string nome){
  this->_a = a;
  this->_cor = cor;
  this->_nome = nome;
}

string Cubo::get_cor(){
  return this->_cor;
}

string Cubo::get_nome(){
  return this->_nome;
}

double Cubo::get_volume(){
  double a = this->_a;
  return (a*a*a);
}