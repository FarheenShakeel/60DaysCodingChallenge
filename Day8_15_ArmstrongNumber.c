#include<stdio.h>
int main()
{
    int n,q,r,count=0,mul=1,result=0,temp_count;
    printf("Enter the number: ");
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        q=q/10;
        count++;
    }
    q=n;
    temp_count=count;
    while(q!=0)
    {
        r=q%10;
        while(temp_count!=0)
        {
            mul=mul*r;
            temp_count--;
        }
        result=result+mul;
        mul=1;
        temp_count=count;
        q=q/10;
    }
    if(result==n)
        printf("%d is Armstrong number",n);
    else
        printf("%d is not a Armstrong Number",n);

    return 0;
}