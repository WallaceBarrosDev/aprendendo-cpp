#ifndef COUNT_H
#define COUNT_H

class Count {
public:
  void friend increment(Count &count);

  Count(int value = 0);

  void print(void);
private:
  int value;
};

#endif
