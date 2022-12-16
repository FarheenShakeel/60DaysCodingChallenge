#include<stdio.h>
int main()
{
    int a[100],n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter %d elements in the array:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
