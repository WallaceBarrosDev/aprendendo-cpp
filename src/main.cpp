#include "UserInterface.h"
#include <iostream>

template < typename T >
T soma(T a, T b) {
  return a + b;
}

int main() {
  std::cout << "10 + 20 = " << soma(10, 20) << std::endl;
  return 0;
}
