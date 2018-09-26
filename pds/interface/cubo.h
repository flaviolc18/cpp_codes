#ifndef PDS2_CUBO_H
#define PDS2_CUBO_H

#include "forma3d.h"

class Cubo : public Forma3D{
  private:
    double _a;
    string _cor;
    string _nome;

  public:
    Cubo(string cor, double a);

    //abstract class
    virtual string get_cor();
    virtual string get_nome();
    virtual double get_volume();
};

#endif