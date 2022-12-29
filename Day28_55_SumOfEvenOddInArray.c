#include<stdio.h>
int main()
{
    int a[100],n,i,even_sum=0,odd_sum=0;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter %d elements in the array:\n",n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<n; i++)
    {
        if(a[i]%2==0)
        {
            even_sum = even_sum + a[i];
        }
        else
        {
            odd_sum = odd_sum + a[i];
        
        }   
    }
    printf("Sum of Even  numbers in this array =%d",even_sum);
    printf("\nSum of Odd  numbers in this array =%d",odd_sum);
    return 0;
}
