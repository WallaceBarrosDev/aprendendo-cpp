#include "iostream"
using std::cout;
using std::endl;

#include "iomanip"
using std::setw;
using std::setfill;

#include "Time.h"

Time::Time(int hour, int minut, int second)
  : hour(hour), minut(minut), second(second), id(20) {}


void Time::setTime(int hour, int minut, int second) {
  this->setHour(hour);
  this->setMinut(minut);
  this->setSecond(second);
}

void Time::setHour(int hour) {
  this->hour = (hour > 0 && hour < 24) ? hour : 0;
}

void Time::setMinut(int minut) {
  this->minut = (minut > 0 && minut < 60) ? minut : 0;
}

void Time::setSecond(int second) {
  this->second = (second > 0 && second < 60) ? second : 0;
}

int Time::getHour() const { return hour; }
int Time::getMinut() const { return minut; }
int Time::getSecond() const { return second; }

void Time::printUniveral(void) const {
  cout << "horas: " << setfill('0')
    << setw(2) << hour << ":"
    << setw(2) << minut << ":"
    << setw(2) << second << endl;
}

void Time::printStrandat(void) const {
  cout << "horas (formatado): " << setfill('0') 
    << setw(2) << ((hour == 0 || hour == 12) ? 12 : hour % 12) << ":"
    << setw(2) << minut << ":"
    << setw(2) << second << (hour < 12 ? " AM" : " PM") << endl;
}
