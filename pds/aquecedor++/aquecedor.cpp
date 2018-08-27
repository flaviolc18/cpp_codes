#include "aquecedor.h"

/* "Os dois primeiros devem ser inicializados com 10 e 40 graus respectivamente no construtor." */
Aquecedor::Aquecedor(double temp, double fator_temp){
  _min_temperatura = 10;
  _max_temperatura = 40;

  if(temp <_min_temperatura || temp > _max_temperatura)
    throw invalid_argument("The temp argument must be between 10 (min_temp) and 40 (max_temp)");

  _temperatura = temp;
  _fator_temperatura = fator_temp;
}

double Aquecedor::get_temperatura(){
  return _temperatura;
}

void Aquecedor::set_fator_temperatura(double fator_temp){
  _fator_temperatura = fator_temp;
}

void Aquecedor::resfriar(){
  if(_temperatura-_fator_temperatura <_min_temperatura)
      throw invalid_argument("Your object will overcome the min temperature by calling this method");

  _temperatura -= _fator_temperatura;
}

void Aquecedor::aquecer(){
  if(_temperatura+_fator_temperatura > _max_temperatura)
    throw invalid_argument("Your object will overcome the max temperature by calling this method");

  _temperatura += _fator_temperatura;
}