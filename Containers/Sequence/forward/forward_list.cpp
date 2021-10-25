#include "forward_list.h"

forward_list::forward_list() {
  this->head = NULL;
  this->current = NULL;
  size = 0;
}

void* forward_list::initilizeList() {
  return (malloc(sizeof(_linkedList)));
}

forward_list::~forward_list() {

}

bool forward_list::push_front(int n) {
  _linkedList *tmp = new _linkedList();
  tmp->val = n;
  if(size == 0) {
    head = tmp;
  }
  current =tmp;
  size++;
  return true;
}

int forward_list::pop_front() {
  if (size == 0)
      return -1;
  
  int returnVal = current->val;
  removeIndex(size);

  return returnVal;
}


void forward_list::removeIndex(int index) {
  if (index == 1)
  {
    delete head;
    head = NULL;
    current = NULL;
  }

  _linkedList *tmp = head;
  for (int i=1; i<index-1; i++) {

  }

  _linkedList *next = tmp->next;

  tmp->next = NULL;

  delete next;
}