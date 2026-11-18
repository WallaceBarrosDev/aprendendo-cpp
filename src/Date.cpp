#include "Date.h"
#include <iostream>
using namespace std;

Date::Date(int month, int day, int year) {
  if(month > 0 && month <= 12) {
    this->month = month;
  } else {
    cout << "Mês " << month << " invalido, setado mês como 1" << endl;
    this->month = 1;
  }
  
  if(year >= 1900) {
    this->year = year;
  } else {
    cout << "Ano " << year << " invalido, setando ano como 1900" << endl;
    this->year = 1900;
  }

  this->day = checkday(day);
}

void Date::print(void) const {
  cout << this->month << "/" << this->day << "/" << this->year;
}

Date::~Date(void) {
  cout << "excluindo a data ";
  print();
  cout << endl;
}

int Date::checkday(int day) const {
  static const int daysPerMonth[13] = {
    0,31,28,31,30,31,30,31,31,30,31,30,31
  };

  if (day > 0 && day <= daysPerMonth[this->month]) return day;
  
  if (month == 2 && day == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))) return day;

  cout << "Dia " << day << " invalido, definindo dia como 1" << endl;
  return 1;
}
