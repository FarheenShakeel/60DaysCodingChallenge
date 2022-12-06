#include<stdio.h>
int main()
{
    int a=-1,b=1,c=0,n;
    printf("Enter n : ");
    scanf("%d",&n);
    printf("Fibonacci Series upto  %d terms is as follows :",n);
    for(int i=1; i<=n; ++i)
    {
        c=a+b;
        printf("\t%d",c);
        a=b;
        b=c;
    }
    return 0;
}