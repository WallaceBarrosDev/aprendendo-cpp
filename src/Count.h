#ifndef COUNT_H
#define COUNT_H

class Count {
public:
  void friend setValue(Count &count, int value);

  Count(int value = 0);

  void print(void);
private:
  int value;
};

#endif
