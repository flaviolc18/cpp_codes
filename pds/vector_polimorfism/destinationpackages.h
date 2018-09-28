#ifndef PDS2_DESTINATION_PACKAGE
#define PDS2_DESTINATION_PACKAGE

#include <iostream>
#include <map>
#include <vector>

#include "package.h"

using namespace std;

class DestinationPackages {

  public:
    map<string, vector<Package*>> _packs;

  public:
    double custo_total(string user="");
    void add_package(Package *p);

};

#endif