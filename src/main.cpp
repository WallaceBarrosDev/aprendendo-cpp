// #include "Time.h"
#include "Employee.h"

int main(void) {
  Date birth(02, 15, 2003);
  Date hire(11, 22, 2023);

  Employee employee("Wallace", "Barros", birth, hire);
  employee.print();

  Date invalideDate(22, 300, 1000);

  return 0;
}
