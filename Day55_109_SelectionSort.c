#include<stdio.h>
int n;
void takearray(int *arr,int n)
{
	int i;
	
	printf("Enter the %d elements in array:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
}
void printarray(int *arr,int n)
{
	int i;
	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
}
void selectionSort(int *arr, int n)
{
  int i, d, position, t;
  for (i = 0; i < (n - 1); i++) 
  {
    position = i;

    for (d = i + 1; d < n; d++)
    {
      if (arr[position] > arr[d])
        position = d;
    }
    if (position != i)
    {
      t = arr[i];
      arr[i] = arr[position];
      arr[position] = t;
    }
  }
}
int main()
{
	int arr[100],n;
	printf("\nSELECTION SORT\n");
	printf("Enter the no of elements in array: ");
	scanf("%d",&n);
	takearray(arr,n);
	printf("\nArray Before Sorting\n");
	printarray(arr,n);
	selectionSort(arr,n);
	printf("\nArray after Sorting\n");
	printarray(arr,n);
	return 0;
}
