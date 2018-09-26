#ifndef PDS2_QUADRADO_H
#define PDS2_QUADRADO_H

#include "forma2d.h"

class Quadrado : public Forma2D{

  private:
    string _nome;
    string _cor;
    double _a;

  public:
    Quadrado(string cor, double a);

    virtual string get_nome();
    virtual string get_cor();
    virtual double get_area();
    virtual double get_perimetro();

};

#endif