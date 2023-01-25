#include<stdio.h>
#include<conio.h>
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
void quicksort(int arr[25],int first,int last)
{
   int i, j, pivot, temp;
   if(first<last){
      pivot=first;
      i=first;
      j=last;
      while(i<j)
      {
         while(arr[i]<=arr[pivot] && i<last)
            i++;
         while(arr[j]>arr[pivot])
            j--;
         if(i<j)
         {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);
   }
}
int main()
{
   int i, n, arr[25];
   printf("\nQUICK SORT\n");
   printf("Enter the no of array: ");
   scanf("%d",&n);
   takearray(arr,n);
   printf("\nArray Befor Sorting\n");
   printarray(arr,n);
   quicksort(arr,0,n-1);
   printf("\nArray After Sorting:\n");
   printarray(arr,n);
   getch();
   return 0;
}
