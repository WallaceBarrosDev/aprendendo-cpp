// #include "Time.h"
//#include "Employee.h"
//#include "Count.h"

#include "Aluno.h"
#include <iostream>

int main(void) {
  Aluno *aluno = new Aluno("Wallace", 23, 20253892, "MAC");

  std::cout << "Nome do aluno: " << aluno->getNome() << endl;

  delete aluno;
  aluno = 0;

  return 0;
}
