#include "circulo.h"

Circulo::Circulo(string cor, double r){
  this->_nome = "circulo";
  this->_cor = cor;
  this->_r = r;
}

string Circulo::get_cor(){
  return this->_cor;
}

string Circulo::get_nome(){
  return this->_nome;
}

double Circulo::get_area(){
  double r = this->_r;
  return (PI*r*r);
}

double Circulo::get_perimetro(){
  return (2*PI*this->_r);
}