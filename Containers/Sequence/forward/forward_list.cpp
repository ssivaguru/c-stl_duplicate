#include "forward_list.h"


template <typename T>
forward_list<T>::forward_list() {
  this->head = NULL;
  this->current = NULL;
  length = 0;
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

  if(length == 0) {
    head = tmp;
    current = head;
  } else {
    current->next =tmp;
    current = tmp;
  }

  length++;
  return true;
}

template <typename T>
T forward_list<T>::pop_front() {
 
  if (length == 0)
      return -1;
  
  T returnVal = current->val;
  
  removeLast();
  length--;
  return returnVal;
}


template <typename T>
void forward_list<T>::removeLast() {
  if (length == 1)
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

template <typename T>
void forward_list<T>::insert_after(T val, int n) {

  //cannot insert
  if (n > length) {
    return;
  } else if (n == length) {
    push_front(n);
    return;
  }

  //now the value is in between
  _linkedList *second = head;
  int index = 1;
  while (index != n) {
    second = second->next;
    index++;
  }
}

template <typename T>
void forward_list<T>::erase_after(){
  
}

template <typename T>
T forward_list<T>::front(){
  return current->val;
}

template <typename T>
int forward_list<T>::size() {
  return length;
}