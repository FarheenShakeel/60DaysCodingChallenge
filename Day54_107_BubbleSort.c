#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,temp,n,a[100];
	printf("\nBUBBLE SORT\n");
	printf("Enter the no of elements in array: ");
	scanf("%d",&n);
	printf("Enter %d elements in array\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array Before Sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])	
			{
				temp = a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("\nArray After Sorting:\n");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
