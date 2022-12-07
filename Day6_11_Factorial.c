#include<stdio.h>
int main()
{
    int n,i;
    double fac=1;
    printf("Enter the Number: ");
    scanf("%d",&n);
    if(n<0)
    printf("Error! Factorial of negative number doesn't exist.");
    else
    {
        for(i=1; i<=n;i++)
        fac=fac*i;
        printf("\nFactorial of %d = %.2lf",n,fac);
    }
    return 0;
}
