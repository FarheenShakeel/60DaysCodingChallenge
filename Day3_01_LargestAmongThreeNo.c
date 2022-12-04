#include<stdio.h>
int main()
{
    int a,b,c,largest;
    printf("Enter 1 Number: ");
    scanf("%d",&a);
    printf("Enter 2 Number: ");
    scanf("%d",&b);
    printf("Enter 3 Number: ");
    scanf("%d",&c);
    largest=(a>b)?((a>c)?a:c):((b>c)?b:c);
    printf("Largest Number: %d",largest);
    return 0;
}