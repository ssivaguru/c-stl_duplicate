#ifndef _VECTOR_LIST
#define _VECTOR_LIST

#include <stdio.h>
#include <stdlib.h>


template<typename T> class vector {

public:
  vector(int n);
  vector();
  bool push_back(T n);
  T pop_back();
  int capacity();
  int length();
  T at(int index);
private:
bool reallocateVector(int length);

T *elementArray;
int size = 0 , container = 0;
bool isFixed;
};

#include "vector.cpp"

#endif