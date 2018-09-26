#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H

#include <cmath>

#include "forma2d.h"

class Triangulo : public Forma2D{

  private:
    string _nome;
    string _cor;
    double _a1;
    double _a2;
    double _a3;

  public:
    Triangulo(string cor, double a1, double a2, double a3);

    virtual string get_nome();
    virtual string get_cor();
    virtual double get_area();
    virtual double get_perimetro();

};

#endif