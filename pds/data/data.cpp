#include "data.h"

Data::Data(int dia, int mes, int ano){

  _dia = dia;
  _mes = mes;
  _ano = ano;
}

int Data::get_dia(){
  return _dia;
}

int Data::get_mes(){
  return _mes;
}

int Data::get_ano(){
  return _ano;
}

string Data::get_data_curto(){
  return to_string(_dia)+"/"+to_string(_mes)+"/"+to_string(_ano);
}

string Data::get_data_longo(){
  return to_string(_dia)+" de "+array_meses[_mes-1]+" de "+to_string(_ano);
}
