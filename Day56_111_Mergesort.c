#include<stdio.h>
#include<conio.h>
int arr[20];       
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
void merge(int arr[],int l,int m,int h)
{
  int arr1[10],arr2[10]; 
  int n1,n2,i,j,k;
  n1=m-l+1;
  n2=h-m;

  for(i=0;i<n1;i++)
    arr1[i]=arr[l+i];
  for(j=0;j<n2;j++)
    arr2[j]=arr[m+j+1];

  arr1[i]=9999;  
    arr2[j]=9999;

  i=0;j=0;
  for(k=l;k<=h;k++)  
  {
    if(arr1[i]<=arr2[j])
      arr[k]=arr1[i++];
    else
      arr[k]=arr2[j++];
  }
}
void merge_sort(int arr[],int low,int high)
{
  int mid;
  if(low<high)
  {
    mid=(low+high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
  }
}
int main()
{
  int n,i;
  printf("\nMAERGE SORT\n");
  printf("Enter the no of elements in array: ");
  scanf("%d",&n);
  takearray(arr,n);
  printf("\nArray Before Sorting\n");
  printarray(arr,n);
  merge_sort(arr,0,n-1);  
  printf("\nArray After Sorting\n");
  printarray(arr,n);
  getch();
  return 0;
}
