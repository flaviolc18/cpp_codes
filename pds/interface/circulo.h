#ifndef PDS2_CIRCULO_H
#define PDS2_CIRCULO_H

#include "forma2d.h"

class Circulo : public Forma2D{
  private:
    double _r;
    string _cor;
    string _nome;

  public:
    Circulo(string cor, double r);

    virtual string get_cor();
    virtual string get_nome();
    virtual double get_area();
    virtual double get_perimetro();
};

#endif