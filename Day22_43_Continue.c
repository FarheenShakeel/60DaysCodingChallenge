#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Number divisible by 5 upto %d: \n",n);
    while(i<=n)
    {
        if(i%5!=0)
        {
            i++;
            continue;
        }
        printf("%d\t",i);
       i++;
    }
       return 0;
}
