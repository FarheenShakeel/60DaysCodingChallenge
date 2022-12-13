#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d = %d is %d\n",a,b,a==b);
    printf("%d = %d is %d\n",a,c,a==c);
    printf("%d > %d is %d\n",a,b,a>b);
    printf("%d < %d is %d\n",a,c,a<c);
    printf("%d < %d is %d\n",a,b,a<b);
    printf("%d != %d is %d\n",a,b,a!=b);
    printf("%d != %d is %d\n",a,c,a!=c);
    printf("%d >= %d is %d\n",a,b,a==b);
    printf("%d >= %d is %d\n",a,c,a==c);
    printf("%d <= %d is %d\n",a,b,a<=b);
    printf("%d <= %d is %d\n",a,c,a<=c);
    return 0;
}

