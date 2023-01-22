#include<stdio.h>
int n,arr[100],position;
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
void deletion(int *arr, int n)
{
	int i;
	printf("Enter the position whose element is to be deleted : ");
	scanf("%d",&position);
	n--;
	for (i = position-1; i <= n; i++)
		arr[i] = arr[i + 1];
}
int main()
{
	int arr[100],n;
	printf("Enter the no of elements in array: ");
	scanf("%d",&n);
	takearray(arr,n);
	deletion(arr,n);
	printf("\nArray after Deletion:\n");
	printarray(arr,n-1);
	return 0;
}
