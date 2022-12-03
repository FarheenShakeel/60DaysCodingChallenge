#include<stdio.h>
int main()
{
    int time;
    float principal_amt, rate, simple_interest;
    printf("Enter the values of Principal Amount, Rate and Time:\n");
    scanf("%f %f %d",&principal_amt, &rate, &time);
    simple_interest=(principal_amt * rate *time)/100;
    printf("Amount = Rs %.2f\n",principal_amt);
    printf("Rate = Rs %.2f %%\n",rate);
    printf("Time = %d years\n",time);
    printf("Simple interest = %.2f\n",simple_interest);
    
    return 0;
}
