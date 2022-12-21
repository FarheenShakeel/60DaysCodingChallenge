#include<stdio.h>
int main()
{
    int i,n,num,large=0;
    printf("Enter the values of n: ");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++)
    {
        printf("Number %d:",i+1);
        scanf("%d",&num);
        if(num>large)
        large=num;
    }
    printf("\n\nLargest Number is %d",large);
    return 0;
}
