#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

class Aquecedor{

  double _temperatura;

  public:
    Aquecedor();
    double get_temperatura();
    void resfriar();
    void aquecer();

};

#endif