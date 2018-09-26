#include "quadrado.h"

Quadrado::Quadrado(string cor, double a){
  this->_nome = "quadrado";
  this->_cor = cor;
  this->_a = a;
}

string Quadrado::get_cor(){
  return this->_cor;
}

string Quadrado::get_nome(){
  return this->_nome;
}

double Quadrado::get_area(){
  double a = this->_a;
  return (a*a);
}

double Quadrado::get_perimetro(){
  return (4*this->_a);
}