#include <stdio.h>
long factorial(int);
long find_ncr(int, int);
int main()
{
   int n, r;
   long ncr;
   printf("Enter the value of n and r: ");
   scanf("%d %d",&n,&r);
   ncr = find_ncr(n, r);
   printf("%dC%d = %ld", n, r, ncr);
   return 0;
}
long find_ncr(int n, int r) 
{
   long result;
   result = factorial(n)/(factorial(r)*factorial(n-r));
   return result;
}
long factorial(int n)
{
   int c;
   long result = 1;
   for (c = 1; c <= n; c++)
   result = result*c;
   return result;
}