#include "iostream"
using std::cout;
using std::endl;

#include "iomanip"
using std::setw;
using std::setfill;

#include "Time.h"

Time::Time(int hours, int minuts, int seconds) {
  this->setTime(hours, minuts, seconds);
}

void Time::setTime(int hours, int minuts, int seconds) {
  this->setHours(hours);
  this->setMinuts(minuts);
  this->setSeconds(seconds);
}

void Time::setHours(int hours) {
  this->hours = (hours > 0 && hours < 24) ? hours : 0;
}

void Time::setMinuts(int minuts) {
  this->minuts = (minuts > 0 && minuts < 60) ? minuts : 0;
}

void Time::setSeconds(int seconds) { 
  this->seconds = (seconds > 0 && seconds < 60) ? seconds : 0;
}

void Time::printUniveral(void) {
  cout << "horas: " << setfill('0')
    << setw(2) << hours << ":"
    << setw(2) << minuts << ":"
    << setw(2) << seconds << endl;
}

void Time::printStrandat(void) {
  cout << "horas (formatado): " << setfill('0') 
    << setw(2) << ((hours == 0 || hours == 12) ? 12 : hours % 12) << ":"
    << setw(2) << minuts << ":"
    << setw(2) << seconds << (hours < 12 ? " AM" : " PM") << endl;
}
