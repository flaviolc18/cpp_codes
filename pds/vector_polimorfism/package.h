#ifndef PDS2_PACKAGE_H
#define PDS2_PACKAGE_H

#include <iostream>

using namespace std;

class Package{
  private:
    string _nome;
    string _endereco;
    unsigned int _peso;
    unsigned int _custo_por_quilo;
  public:
    Package(
      unsigned int peso,
      unsigned int custo_por_quilo,
      string nome,
      string endereco
    );
    unsigned int get_peso() const;
    unsigned int get_custo_por_quilo() const;
    string get_nome();
    virtual double calculate_cost() const;
};

#endif