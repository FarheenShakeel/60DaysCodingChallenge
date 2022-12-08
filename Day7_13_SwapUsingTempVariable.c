#include<stdio.h>
int main()
{
    int first, second, temp;
    printf("Enter first Number: ");
    scanf("%d",&first);
    printf("nEnter second Number: ");
    scanf("%d",&second);
    
    temp = first;
    first = second;
    second = temp;
    
    printf("\nAfter Swapping first number = %d", first);
    printf("\nAfter Swapping second number = %d", second);
    return 0;
}
