#include "vector.h"



template<typename T> vector<T>::vector(int n) {
  isFixed = true;
  size = 0;
  container = n;
  elementArray = (T *) malloc(sizeof(T) * size);
}


template<typename T>vector<T>::vector() {
  isFixed = false;
  elementArray = (T *) malloc(sizeof(T) * 1);;
  size = 0;
  container = 1;
}


template<typename T> bool vector<T>::push_back(T n) {
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

template<typename T> T vector<T>::pop_back() {
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

template<typename T> int vector<T>::capacity() {
  return container;
}

template<typename T> bool vector<T>::reallocateVector(int length) {
  
  T *newBuffer = (T *)realloc(elementArray, length);

  if (newBuffer == NULL) {
    return false;
  }
      
  container = length;

  elementArray = newBuffer;
  return true;
}

template<typename T> int vector<T>::length() {
  return size+1;
}

template<typename T> T vector<T>:: at(int index){
  return elementArray[index];
}