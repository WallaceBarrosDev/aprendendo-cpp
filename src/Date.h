#ifndef DATE_H
#define DATE_H

class Date {
public:
  Date(int = 1, int = 1, int = 1900);
  void print(void) const;
  ~Date(void);
private:
  int month, day, year;
  int checkday(int) const;
};

#endif
