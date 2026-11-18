#include "Aluno.h"

Aluno::Aluno(string nome, int idade, int matricula, string curso):
  Pessoa(nome, idade), matricula(matricula), curso(curso) {}
