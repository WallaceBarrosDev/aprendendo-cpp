#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using namespace std;

#include "Date.h"
#include "Count.h"

class Employee {
public:
  static void printCount(void);

  Employee(const char * const, const char * const, const Date &, const Date &);
  void print() const;
  ~Employee();

private:
  string firstName, lastName;
  const Date birthDate;
  const Date hireDate;

  static Count count;
};

#endif
