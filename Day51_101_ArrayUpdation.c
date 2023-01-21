#include<stdio.h>
int n,arr[100],element;
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
void updation(int *arr, int n)
{
	int position;
	printf("Enter the element you want to update: ");
	scanf("%d",&element);
	printf("At position: ");
	scanf("%d",&position);
	arr[position-1]=element;
}
int main()
{
	int arr[100],n;
	printf("Enter the no of elements in array: ");
	scanf("%d",&n);
	takearray(arr,n);
	updation(arr,n);
	printf("\nArray after Updation:\n");
	printarray(arr,n);
	return 0;
}
