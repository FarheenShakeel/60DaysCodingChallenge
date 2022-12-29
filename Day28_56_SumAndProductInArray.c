#include<stdio.h>
int main()
{
    int n,i,a[100],sum=0,product=1;
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of an array:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1; i<=n; i++)
    {
        sum=sum+a[i];
        product= product*a[i];
    }
        printf("Sum of all the elements in array = %d",sum);
        printf("\nProduct of all the elements in array = %d",product);
    return 0;
}
