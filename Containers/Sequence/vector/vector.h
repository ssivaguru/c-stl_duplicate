#include <stdio.h>
#include <stdlib.h>


class vector {

public:
  vector(int n);
  vector();
  bool push_back(int n);
  int pop_back();
  int capacity();
  int length();
private:
bool reallocateVector(int length);

int *elementArray;
int size = 0 , container = 0;
bool isFixed;
};