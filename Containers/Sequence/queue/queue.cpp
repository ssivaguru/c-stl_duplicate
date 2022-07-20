#include "queue.h"


template<typename T> queue<T>::queue() {
  this->head = (_queue*) malloc(sizeof(_queue));
  this->size = 1;
  this->current = 0;
}

template<typename T> void queue<T>::push(T x) {
  _queue *tmp = (_queue*) malloc(sizeof(_queue));

  tmp->next = NULL;
  tmp->back = NULL;
  tmp->val = x;

  if (current == 0)
    head = tmp;
  else
    {
      head->next = tmp;
      tmp->back = head;
      head = tmp;
    }

  current++;
}

template<typename T> T queue<T>::top() {
    return head->val;
}


template<typename T> void queue<T>::pop() {
    _queue* tmp = head;
    head = head->back;
    current--;
}

template<typename T> bool queue<T>::isEmpty() {
  return current == 0;
}