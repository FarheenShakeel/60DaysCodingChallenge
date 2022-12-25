#include <stdio.h>
int main ()
{
    int number[30];
    int i, j, a, n;
    printf("Enter the no of Elements: ");
    scanf("%d", &n);
    printf("Enter the numbers \n");
    for (i = 0; i < n; ++i)
        scanf("%d", &number[i]);
    for (i = 0; i < n; ++i)
     {
        for (j = i + 1; j < n; ++j)
        {
            if (number[i] < number[j])
            {
                a = number[i];
                number[i] = number[j];
                number[j] = a;
            }
        }
    }
    printf("The numbers arranged in descending order are given below \n");
    for (i = 0; i < n; ++i)
    {
        printf("%d\n", number[i]);
    }
    printf("The Second largest number is  = %d\n", number[1]);
    printf("The Second smallest number is = %d\n", number[n - 2]);
    return 0;
}