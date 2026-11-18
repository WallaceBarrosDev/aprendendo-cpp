// #include "Time.h"
#include "Employee.h"
//#include "Count.h"

int main(void) {
  Date birfth(2, 15, 2003);
  Date hire(11, 22, 2023);
  
  Employee::printCount();
  Employee *employee1 = new Employee("Wallace", "Barros", birfth, hire);
  Employee::printCount();
  Employee *employee2 = new Employee("Ana", "Julia", birfth, hire);
  Employee::printCount();

  delete employee1;
  employee1 = 0;
  delete employee2;
  employee2 = 0;

  return 0;
}
