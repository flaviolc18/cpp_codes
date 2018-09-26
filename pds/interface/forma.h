#ifndef PDS2_FORMA_H
#define PDS2_FORMA_H

#include <iostream>

using namespace std;

class Forma{

  public:
    //virtual ~Forma(){};
    virtual string get_cor() = 0;
    virtual string get_nome() = 0;
};

#endif