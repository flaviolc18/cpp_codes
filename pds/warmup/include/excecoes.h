#ifndef PDS2_EXCECOES_H
#define PDS2_EXCECOES_H

#include <stdexcept>
#include <iostream>
#include <string>

class TrianguloInvalidoException : public std::exception
{

  std::string _msg;

public:
  TrianguloInvalidoException(const std::string msg);
  virtual const char *what() const noexcept override;
};

#endif
