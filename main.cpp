#include "Containers/Sequence/forward/forward_list.h"
#include <iostream>


using namespace std;

int main() {
  forward_list<int> *list = new forward_list<int>();

  list->push_front(1);
  list->push_front(2);
  list->push_front(3);
  

  cout << list->pop_front() << endl;
  cout << list->pop_front() << endl;
  cout << list->pop_front() << endl;
  cout << list->pop_front() << endl;
  cout << list->pop_front() << endl;
    list->push_front(1);
  list->push_front(2);
  list->push_front(3);
    cout << list->pop_front() << endl;
  cout << list->pop_front() << endl;
  cout << list->pop_front() << endl;
}