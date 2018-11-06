#include "triangulo.h"

Triangulo::Triangulo(double x, double y, double z){
  if(x<0 || y<0 || z<0){
    throw TrianguloInvalidoException("Os parâmetros devem ser positivos");
  }

  double max = std::max({x,y,z});
  if(max > (x+y+z-max)){
    throw TrianguloInvalidoException("Não satisfaz a condição de existencia de um triângulo");
  }
  this->_x = x;
  this->_y = y;
  this->_z = z;
}

Tipo Triangulo::determinar_tipo(){
  if(this->_x ==  this->_y && this->_y == this->_z){
    return EQUILATERO;
  }
  if(this->_x !=  this->_y && this->_y != this->_z && this->_z != this->_x){
    return ESCALENO;
  }
  return ISOSCELES;
}