#include<stdio.h>
int n,arr[100],element,position;
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
void insertion(int *arr, int n)
{
	int i;
	printf("Enter the element to be inserted: ");
	scanf("%d",&element);
	printf("Enter the position: ");
	scanf("%d",&position);
	n++;
	if(position>n)
	printf("Invalid input!");
	else
	{
		for(i=n;i>=position; i--)
		{
			arr[i] = arr[i-1];
		}
		arr[position-1]=element;
	}
}
int main()
{
	int arr[100],n;
	printf("Enter the no of elements in array: ");
	scanf("%d",&n);
	takearray(arr,n);
	insertion(arr,n);
	printf("\nArray after Insertion:\n");
	printarray(arr,n);
	return 0;
}
