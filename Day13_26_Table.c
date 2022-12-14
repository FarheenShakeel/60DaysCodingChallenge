#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the no: ");
    scanf("%d",&n);
    printf("Table of %d :\n",n);
    for(i=1;i<=10;i++)
    {
        printf("%d",i*n);
        printf("\n");
    }
    return 0;
}
