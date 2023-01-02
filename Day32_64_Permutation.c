#include <stdio.h>
long factorial(int);
long find_npr(int, int);
int main(){
   int n, r;
   long npr;
   printf("Enter the value of n and r:");
   scanf("%d %d",&n,&r);
   npr = find_npr(n, r);
   printf("%dP%d = %ld", n, r, npr);
   return 0;
}
long find_npr(int n, int r) 
{
   long result;
   result = factorial(n)/factorial(n-r);
   return result;
}
long factorial(int n) {
   int c;
   long result = 1;
   for (c = 1; c <= n; c++)
   result = result*c;
   return result;
}