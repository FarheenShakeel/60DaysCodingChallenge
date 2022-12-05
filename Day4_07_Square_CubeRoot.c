#include<stdio.h>
#include<math.h>
int main()
{
    float num1,squareroot;
    int num2,cuberoot;
    printf("Enter any number to find the square root: ");
    scanf("%f",&num1);
    printf("Enter any number to find the cube root: ");
    scanf("%d",&num2);
    squareroot=sqrt(num1);
    cuberoot=cbrt(num2);
    printf("Square Root of %.2f is %.2f",num1,squareroot);
    printf("\nCube Root of %d is %d",num2,cuberoot);
    return 0;
}