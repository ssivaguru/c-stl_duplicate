#include "vector.h"



vector::vector(int n) {
  isFixed = true;
  size = 0;
  container = n;
  elementArray = (int *) malloc(sizeof(int) * size);
}


vector::vector() {
  isFixed = false;
  elementArray = (int *) malloc(sizeof(int) * 1);;
  size = 0;
  container = 1;
}


bool vector::push_back(int n) {
  //then reallocate the array
  if (container == size) {
    if (!reallocateVector(container * 2)) {
      return false;
    }
  }
  elementArray[size] = n;
  size++;

  return true;
}

int vector::pop_back() {
  if (size == 0)
    return -1;
  //reduce memroy
  int returnVal  = elementArray[size-1];
  size--;
  if (size < container/2) {
    reallocateVector(container/2);
  }
  
  return returnVal;
}

int vector::capacity() {
  return container;
}

bool vector::reallocateVector(int length) {
  
  int *newBuffer = (int *)realloc(elementArray, length);

  if (newBuffer == NULL) {
    return false;
  }
      
  container = length;

  elementArray = newBuffer;
  return true;
}

int vector::length() {
  return size+1;
}