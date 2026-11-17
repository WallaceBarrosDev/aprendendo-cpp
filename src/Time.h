#ifndef TIME_H
#define TIME_H

class Time {
public:
  Time(int = 0, int = 0, int = 0);
  
  void setTime(int, int, int);
  void setHour(int);
  void setMinut(int);
  void setSecond(int);

  int getHour(void) const;
  int getMinut(void) const;
  int getSecond(void) const;

  void printUniveral(void) const;
  void printStrandat(void) const;
private:
  int hour, minut, second;
  const int id;
};

#endif
