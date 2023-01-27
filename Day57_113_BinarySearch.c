#include <stdio.h>
int main()
{
  int c, first, last, middle, n, search, array[100];
  printf("\nBINARY SEARCH\n");
  printf("Enter number of elements in array: ");
  scanf("%d", &n);
  printf("Enter %d elements of an array\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
  printf("Enter the element to be searched: ");
  scanf("%d", &search);
  first = 0;
  last = n - 1;
  middle = (first+last)/2;
  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d is found in the array at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0;
}
