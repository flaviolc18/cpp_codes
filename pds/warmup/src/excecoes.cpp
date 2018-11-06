#include "excecoes.h"

TrianguloInvalidoException::TrianguloInvalidoException(std::string msg) : _msg(msg){
}

const char* TrianguloInvalidoException::what() const noexcept{
  return this->_msg.c_str();
}