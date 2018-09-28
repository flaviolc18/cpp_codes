#include "overnightpackage.h"

OverNightPackage::OverNightPackage(
  unsigned int peso,
  unsigned int custo_por_quilo,
  double taxa_de_envio,
  string nome,
  string endereco
) :
  Package(peso, custo_por_quilo, nome, endereco),
  _taxa_de_envio(taxa_de_envio)
{}

double OverNightPackage::calculate_cost() const {
  return (
    (double)
    (this->get_custo_por_quilo()+this->_taxa_de_envio)*this->get_peso()
  );
}