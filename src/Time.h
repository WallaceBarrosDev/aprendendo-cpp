#ifndef TIME_H
#define TIME_H

class Time {
public:
  Time(int = 0, int = 0, int = 0);
  
  void setTime(int, int, int);
  void setHours(int);
  void setMinuts(int);
  void setSeconds(int);

  void printUniveral(void);
  void printStrandat(void);
private:
  int hours, minuts, seconds;
};

#endif
