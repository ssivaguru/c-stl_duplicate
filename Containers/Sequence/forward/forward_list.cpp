#include "forward_list.h"


template <typename T>
forward_list<T>::forward_list() {
  this->head = NULL;
  this->current = NULL;
  size = 0;
}

template <typename T>
void* forward_list<T>::initilizeList() {
  return (malloc(sizeof(_linkedList)));
}

template <typename T>
forward_list<T>::~forward_list() {

}

template <typename T>
bool forward_list<T>::push_front(T n) {
  _linkedList *tmp = new _linkedList();
  tmp->val = n;
  tmp->next = NULL;

  if(size == 0) {
    head = tmp;
    current = head;
  } else {
    current->next =tmp;
    current = tmp;
  }

  size++;
  return true;
}

template <typename T>
T forward_list<T>::pop_front() {
 
  if (size == 0)
      return -1;
  
  T returnVal = current->val;
  
  removeLast();
  size--;
  return returnVal;
}


template <typename T>
void forward_list<T>::removeLast() {
  if (size == 1)
  {
    delete head;
    head = NULL;
    current = NULL;
    return;
  }

  _linkedList *first = head;
  _linkedList *second = head->next;
  while (second->next != NULL) {
    first = first->next;
    second = second->next;
  }

  current = first;
  first->next = NULL;

  delete second;
}