#include <stdio.h>

#define COUNT_SIZE 20001

#define COUNT_CONSTANT 10000

int removeDuplicates(int *nums, int numsSize) {
  int k = 0;
  int count[COUNT_SIZE] = {0};

  for (int i = 0; i < numsSize; i++) {
    if (count[nums[i] + COUNT_CONSTANT] == 2) {
      k++;
      continue;
    }
    count[nums[i] + COUNT_CONSTANT]++;
  }

  int i, j = 0;
  while (j < COUNT_SIZE && i < numsSize) { // nums[k >= numsSize] are being accessed...
    if (count[j] == 0) {
      j++;
    } else {
      nums[i] = j - COUNT_CONSTANT;
      count[j]--;
      i++;
    }
  }

  while (i < numsSize)
  {
    nums[i] = 0;
    i++;
  }

  return numsSize - k;
}

void print_array(int *array, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d\n", array[i]);
  }
}

int main() 
{
  int array[] = {1, 1, 1, 2, 2, 3};
  int k = removeDuplicates(array, 6);
  print_array(array, 6);
  printf("\n k = %d\n", k);
}
