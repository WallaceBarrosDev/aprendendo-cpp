// #include "Time.h"
// #include "Employee.h"

#include "Count.h"

void setValue(Count &count, int value) {
  count.value = value;
}

int main(void) {
  Count count;
  count.print();

  setValue(count, 20);
  count.print();

  return 0;
}
