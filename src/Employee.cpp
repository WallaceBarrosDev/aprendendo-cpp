#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(const char * const firstName, const char * const lastName, const Date &birthDate, const Date &hireDate):
  birthDate(birthDate), hireDate(hireDate) {
    this->firstName = firstName;
    this->lastName = lastName;
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
