#include "Algorithm/Algo.h"
#include <iostream>

using namespace std;

int main()
{
  int arr[] = {5, 2, 5, 9, 7, 8, 1234, 4};
  int size = sizeof(arr) / sizeof(arr[0]);

  selectionSort(arr, arr + size);

  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << endl;
  }
}