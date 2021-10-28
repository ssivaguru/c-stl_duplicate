#ifndef _FORWARD_LIST
#define _FORWARD_LIST

#include <stdio.h>
#include <stdlib.h>

typedef struct linkedList {
  int val;
}_linkedList;

template <typename T> class forward_list {
public:
      forward_list();
      ~forward_list();
      T front();
      bool push_front(T n);
      T pop_front();
      void insert_after(T val, int n);
      void erase_after();
      int size();
private:
    void* initilizeList();
    void removeLast();
    typedef struct linkedList {
      T val;
      linkedList *next;
    }_linkedList;

    _linkedList *head;
    _linkedList *current;
    int length;
};

#include "forward_list.cpp"

#endif