#ifndef PDS2_VPL_DATA_H
#define PDS2_VPL_DATA_H

#include <iostream>

using namespace std;

class Data{

  int _dia;
  int _mes;
  int _ano;
  string array_meses[12] = {
    "janeiro",
    "fevereiro",
    "março",
    "abril",
    "maio",
    "junho",
    "julho",
    "agosto",
    "setembro",
    "outubro",
    "novembro",
    "dezembro"
  };

  public:
    Data(int dia, int mes, int ano);
    int get_dia();
    int get_mes();
    int get_ano();
    string get_data_curto();
    string get_data_longo();

};

#endif