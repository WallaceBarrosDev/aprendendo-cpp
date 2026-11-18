#include "Count.h"
#include <iostream>
using namespace std;

Count::Count(int value): value(value) {};

void Count::print(void) { cout << "valor: " << this->value << endl; }
