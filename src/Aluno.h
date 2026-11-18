#ifndef ALUNO_H
#define ALUNO_H

#include "Pessoa.h"

class Aluno : public Pessoa {
public:
  Aluno(string nome, int idade, int matricula, string curso);
private:
  int matricula;
  string curso;
};

#endif
