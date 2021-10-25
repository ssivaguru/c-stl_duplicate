#include <stdio.h>
#include <stdlib.h>

typedef struct linkedList {
  int val;
}_linkedList;


class forward_list {
public:
      forward_list();
      ~forward_list();
      int front();
      bool push_front(int n);
      int pop_front();
private:
    void* initilizeList();
    void removeIndex(int index);
    typedef struct linkedList {
      int val;
      linkedList *next;
    }_linkedList;

    _linkedList *head;
    _linkedList *current;
    int size;
};