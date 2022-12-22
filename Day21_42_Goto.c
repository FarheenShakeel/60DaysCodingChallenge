#include<stdio.h>
int main()
{
    int i=1,p=1,n;
    printf("Enter the number: ");
    scanf("%d",&n);
Back: p=p*i;
       i++;
       if(i<=n)goto Back;
       printf("\nProduct of first %d natural numbers = %d",n,p);
       return 0;
}
