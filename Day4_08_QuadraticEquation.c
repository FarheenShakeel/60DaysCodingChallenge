#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,dis,r1,r2,realpart,imagpart;
    printf("\nFARHEEN FATIMA\n\n");
    printf("Enter the coefficients a, b and c:\n");
    scanf("%f %f %f",&a, &b, &c);
    dis=b*b-4*a*c;
    printf("d= %f\n",dis);
    //Case1: Real and Unequal
     if(dis>0)
    {	
        r1=(-b+sqrt(dis))/(2*a);
        r2=(-b-sqrt(dis))/(2*a);
        printf("root1=%.2f and root2=%.2f",r1,r2);
    }
      //Case2: Real and Equal
      else if(dis==0)
    {
        r1=r2= -b/(2*a);
        printf("roo1 = root2 = %.2f",r1);
    }
     //Case3: Unequal and Imaginary
     else
     {
        realpart= -b/(2*a);
        imagpart= sqrt(-dis)/(2*a);
        printf("roo1 = %.2f+%.2fi and root2 = %2f-%.2fi", realpart,imagpart, realpart,imagpart);
     }
     return 0;
}
