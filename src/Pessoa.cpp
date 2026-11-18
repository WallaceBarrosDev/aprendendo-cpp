#include "Pessoa.h"

Pessoa::Pessoa(string nome, int idade):
  nome(nome), idade(idade) {}

string Pessoa::getNome(void) { return nome; }
