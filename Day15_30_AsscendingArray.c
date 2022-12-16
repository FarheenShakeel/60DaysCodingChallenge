#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
    printf("\nFARHEEN FATIMA\n\n");
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter %d elements in the array:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Ascending order of an array:\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]<a[j])
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    return 0;
}