#include "esfera.h"

Esfera::Esfera(string cor, double r){
  this->_nome = "esfera";
  this->_cor = cor;
  this->_r = r;
}

string Esfera::get_cor(){
  return this->_cor;
}

string Esfera::get_nome(){
  return this->_nome;
}

double Esfera::get_volume(){
  double r = this->_r;
  return ((4*PI*r*r*r)/(double)3);
}