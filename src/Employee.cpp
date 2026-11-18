#include "Employee.h"
#include <iostream>
using namespace std;

Count Employee::count;

void increment(Count &count) { count.value ++; }

void Employee::printCount(void) { Employee::count.print(); }

Employee::Employee(const char * const firstName, const char * const lastName, const Date &birthDate, const Date &hireDate):
  firstName(firstName), lastName(lastName), birthDate(birthDate), hireDate(hireDate) {
    increment(Employee::count);
}

void Employee::print() const {
  cout << "Nome: " << this->firstName << " " << this->lastName << endl;
  
  cout << "Data de nacimento: ";
  this->birthDate.print();
  cout <<endl;

  cout << "Data de contratação: ";
  this->hireDate.print();
  cout << endl;
}

Employee::~Employee() {
  cout << "Objeto " << this->firstName << " " << this->lastName << " foi destroido" << endl;
}
