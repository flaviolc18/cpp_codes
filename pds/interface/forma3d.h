#ifndef PDS2_FORMA3D_H
#define PDS2_FORMA3D_H

#include "forma.h"

class Forma3D : public Forma{

  public:
    //virtual ~Forma3D(){};
    virtual double get_volume() = 0;
};

#endif