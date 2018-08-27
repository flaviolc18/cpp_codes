#include "aquecedor.h"

Aquecedor::Aquecedor(){
  _temperatura = 20;
}

double Aquecedor::get_temperatura(){
  return _temperatura;
}

void Aquecedor::resfriar(){
  _temperatura -= 5;
}

void Aquecedor::aquecer(){
  _temperatura += 5;
}