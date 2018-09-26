#ifndef PDS2_FORMA_H
#define PDS2_FORMA_H

#define PI 3.14159265358979323846

#include <iostream>

using namespace std;

class Forma{

  public:
    virtual string get_cor() = 0;
    virtual string get_nome() = 0;
};

#endif