#include "package.h"

Package::Package(
  unsigned int peso,
  unsigned int custo_por_quilo,
  string nome,
  string endereco
) :
  _nome(nome),
  _endereco(endereco),
  _peso(peso),
  _custo_por_quilo(custo_por_quilo)
{}

double Package::calculate_cost() const {
  return ((double)this->_custo_por_quilo*this->_peso);
}

unsigned int Package::get_peso() const {
  return this->_peso;
}

unsigned int Package::get_custo_por_quilo() const {
  return this->_custo_por_quilo;
}
