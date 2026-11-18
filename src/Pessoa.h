#ifndef PESSOA_H
#define PESSOA_H

#include <string>
using namespace std;

class Pessoa {
public:
  Pessoa(string nome, int idade);
  string getNome(void);
protected:
  string nome;
  int idade;
};

#endif
