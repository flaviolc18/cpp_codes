#include "tabuleiro.h"

Tabuleiro::Tabuleiro(){

  std::vector<std::string> times;
  times.push_back("brancas");
  times.push_back("negras"); 

  for(std::string time : times){

    int initial = time == "brancas" ? 7 : 0;
    int acc = time == "brancas" ? -1 : 1;

    //inicia os peoes
    for(int i=0; i<8; i++){
      this->_pecas[time][Posicao(i, initial+acc)] = new Peao(i, 4);
    }

    //inicia as torres
    for(int i=0; i<8; i+=7){
      this->_pecas[time][Posicao(i, initial)] = new Torre(i, initial);
    }

    //inicia os cavalos
    for(int i=1; i<8; i+=5){
      this->_pecas[time][Posicao(i, initial)] = new Cavalo(i, initial);
    }

    //inicia os bispos
    for(int i=2; i<8; i+=3){
      this->_pecas[time][Posicao(i, initial)] = new Bispo(i, initial);
    }

    //inicia a rainha e o rei
    this->_pecas[time][Posicao(3, initial)] = new Rainha(3, initial);
    this->_pecas[time][Posicao(4, initial)] = new Rei(4, initial);
  }
}

bool Tabuleiro::pode_mover(Posicao& p){
  return this->_pecas["brancas"].find(p) == this->_pecas["brancas"].end() && this->_pecas["negras"].find(p) == this->_pecas["negras"].end();
}