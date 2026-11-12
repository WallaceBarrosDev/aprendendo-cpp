// Soma de dois números;
#include <iostream>

int main() {
  int primeiroNumero;
  int segundoNumero;

  std::cout << "Olá, o programa ira somar dois números\n\n";

  std::cout << "Digite o primeiro número > ";
  std::cin >> primeiroNumero;

  std::cout << "Digite o segundo número > ";
  std::cin >> segundoNumero;

  std::cout << '\n' << "Resutado: " << primeiroNumero << " + " << segundoNumero << " = " << primeiroNumero + segundoNumero << '\n' << std::endl;

  return 0;
}
