#ifndef PDS2_TWODAYPACKAGE_H
#define PDS2_TWODAYPACKAGE_H

#include "package.h"

class TwoDayPackage : public Package {
  private:
    double _taxa_de_envio;
  public:
    TwoDayPackage(
      unsigned int peso,
      unsigned int custo_por_quilo,
      double taxa_de_envio,
      string nome,
      string endereco
    );
    virtual double calculate_cost() const override;
};

#endif