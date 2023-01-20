#include<stdio.h>
void takearray(int *arr, int n)
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
	printf("Traversing of an Array:\n");
	for(i=0; i<n; i++)
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int arr[100],n;
	printf("Enter the no of elements in array: ");
	scanf("%d",&n);
	takearray(arr,n);
	printarray(arr,n);
	return 0;
}
