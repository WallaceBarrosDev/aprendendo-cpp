// Soma de dois números;
#include <iostream>

using std::cout;
using std::cin;

int main() {
  int primeiroNumero;
  int segundoNumero;

  cout << "Olá, o programa ira somar dois números\n\n";

  cout << "Digite o primeiro número > ";
  cin >> primeiroNumero;

  cout << "Digite o segundo número > ";
  cin >> segundoNumero;

  if(primeiroNumero == segundoNumero) {
    cout << "Os dois números não podem ser iguais" << std::endl;
    return 0;
  }

  cout << '\n' << "Resutado: " << primeiroNumero << " + " << segundoNumero << " = " << primeiroNumero + segundoNumero << std::endl;

  return 0;
}
