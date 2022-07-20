#ifndef _QUEUE_LIST
#define _QUEUE_LIST

#include <stdlib.h>
#include <stdio.h>


template<typename T> class queue {
  public:
    void push(T x);
    T top();
    void pop();
    bool isEmpty();
    queue();
  private:

  typedef struct queueStruct {
    queueStruct* next;
    queueStruct* back;
    T val;
  } _queue;

    int size;
    int current;
    queueStruct *head;
};

#include "queue.cpp"

#endif