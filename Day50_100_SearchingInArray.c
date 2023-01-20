#include<stdio.h>
int n,j=0;arr[100],element;
void takearray(int *arr,int n)
{
	int i;
	
	printf("Enter the %d elements in array:\n",n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
}
void searching(int *arr, int n)
{       
	int flag=0;
	printf("Enter the element you want to search: ");
	scanf("%d",&element);
	while(j<n)
	{
		if(arr[j]==element)
		{
			flag=1;
			break;
		}
		j=j+1;
	}
	if(flag==1)
	printf("\n%d is found at  position %d",element,j+1);
	else
	printf("Element not found in the list");
	
}
int main()
{
	int arr[100],n;
	printf("Enter the no of elements in array: ");
	scanf("%d",&n);
	takearray(arr,n);
	searching(arr,n);
	return 0;
}
