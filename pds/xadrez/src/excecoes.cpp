#include "excecoes.h"

MovimentoInvalidoException::MovimentoInvalidoException(std::string msg) : _msg(msg) {}

const char* MovimentoInvalidoException::what() const noexcept {
  return this->_msg.c_str();
}

PosicaoSemPecaException::PosicaoSemPecaException(std::string msg) : _msg(msg) {}

const char* PosicaoSemPecaException::what() const noexcept {
  return this->_msg.c_str();
}