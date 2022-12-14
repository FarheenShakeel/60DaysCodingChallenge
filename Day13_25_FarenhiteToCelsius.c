#include<stdio.h>
#include<math.h>
int main()
{
    float farenhite, celsius;
    printf("Enter degree in farenhite\n");
    scanf("%f",&farenhite);
    celsius=(float)5/9*(farenhite-32);
    printf("Degree in Celsius: %.2f",celsius);
    return 0;
}

