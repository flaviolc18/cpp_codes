#ifndef PDS2_OVERNIGHTPACKAGE_H
#define PDS2_OVERNIGHTPACKAGE_H

#include "package.h"

class OverNightPackage : public Package {
  private:
    double _taxa_de_envio;
  public:
    OverNightPackage(
      unsigned int peso,
      unsigned int custo_por_quilo,
      double taxa_de_envio,
      string nome,
      string endereco
    );
  virtual double calculate_cost() const override;
};

#endif