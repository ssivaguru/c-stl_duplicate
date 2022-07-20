#include <stdio.h>
#include <stdlib.h>


static inline void swap(int *a, int *b)
{
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

void selectionSort(int *start, int *end)
{
  if (start == NULL || end == NULL)
    return;
  // special case when size is 1
  if (start == end)
    return;

  int minVal = *start;
  int *minIdx = start;
  for (auto i = start; i != end; i++)
  {
    minVal = *i;
    minIdx = i;
    for (auto j = i; j != end; j++)
    {
      if (*j < minVal)
      {
        minVal = *j;
        minIdx = j;
      }
    }
    swap(minIdx, i);
  }
}

