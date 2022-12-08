#include<stdio.h>
int main()
{
    int first, second;
    printf("Enter first Number: ");
    scanf("%d",&first);
    printf("nEnter second Number: ");
    scanf("%d",&second);
    
    first = first - second;
    second = first + second;
    first = second - first;
    
    printf("\nAfter Swapping first number = %d", first);
    printf("\nAfter Swapping second number = %d", second);
    
    return 0;
}
