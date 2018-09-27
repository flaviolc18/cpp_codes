#include "twodaypackage.h"

TwoDayPackage::TwoDayPackage(
  unsigned int peso,
  unsigned int custo_por_quilo,
  double taxa_de_envio,
  string nome,
  string endereco
) : 
  Package(peso, custo_por_quilo, nome, endereco),
  _taxa_de_envio(taxa_de_envio)
{}

double TwoDayPackage::calculate_cost() const {
  return (
    (double)
    (this->get_custo_por_quilo()*this->get_peso())+this->_taxa_de_envio
  );
}