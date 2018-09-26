#ifndef PDS2_ESFERA_H
#define PDS2_ESFERA_H

#include "forma3d.h"

class Esfera : public Forma3D{

  private:
    string _nome;
    string _cor;
    double _r;

  public:
    Esfera(string cor, double r);

    virtual string get_nome();
    virtual string get_cor();
    virtual double get_volume();

};

#endif