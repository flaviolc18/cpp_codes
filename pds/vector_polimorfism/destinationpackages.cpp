#include "destinationpackages.h"

void DestinationPackages::add_package(Package *p){
  if(this->_packs.find(p->get_nome()) == this->_packs.end()){
    this->_packs[p->get_nome()] = {};
    this->_packs[p->get_nome()].push_back(p);
  }else{
    this->_packs[p->get_nome()].push_back(p);
  }
}


double DestinationPackages::custo_total(string user){
  double count = 0;
  if(user == ""){
    for(
      auto it = this->_packs.begin();
      it != this->_packs.end();
      it++
    ){

      for(Package *p : it->second){
        count += p->calculate_cost();
      }
    }
  }else{
    if(this->_packs.find(user) !=  this->_packs.end()){

      for(Package *p : this->_packs[user]){
        count += p->calculate_cost();
      }

    }else{
      //raise exception
      return 0;
    }
  }
  return count;
}
