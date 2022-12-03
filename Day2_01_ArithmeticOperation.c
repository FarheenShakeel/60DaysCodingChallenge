#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,mul,mod;
    float div;
    printf("Enter Number1: ");
    scanf("%d",&num1);
    printf("Enter Number2: ");
    scanf("%d",&num2);
    sum=num1+num2;
    sub=num1-num2;
    mul=num1*num2;
    mod=num1%num2;
    div=(float)num1/num2;
    printf("Sum of %d and %d = %d",num1,num2,sum);
    printf("\nSubtraction of %d and %d = %d",num1,num2,sub);
    printf("\nMultiplication of %d and %d = %d",num1,num2,mul);
    printf("\nModulus of %d and %d = %d",num1,num2,mod);
    printf("\nDivision of %d and %d = %.2f",num1,num2,div);
    return 0;
}