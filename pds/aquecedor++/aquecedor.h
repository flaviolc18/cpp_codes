#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H
#include <iostream>

using namespace std;

class Aquecedor{

  double _temperatura;
  double _min_temperatura;
  double _max_temperatura;
  double _fator_temperatura;

  public:
    Aquecedor(double temp=20, double fator_temp=5);
    double get_temperatura();
    void resfriar();
    void aquecer();
    void set_fator_temperatura(double fator_temp);

};

#endif