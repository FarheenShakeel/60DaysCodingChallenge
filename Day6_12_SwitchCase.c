#include<stdio.h>
int main()
{
    int ch,more,a,b,result;
    float result1;
    printf("Enter two numbers :\n");
    scanf("%d%d",&a,&b);
    do
    {
        printf("\n1. Add\n2. Subtract\n3. Multiply\n4. Division\n");
        printf("\nEnter choice : ");
        scanf("%d",&ch);
        switch(ch)
            {
                case 1: result = a+b; break;
                case 2: result = a-b; break;
                case 3: result = a*b; break;
                case 4: result1 = (float)a/b; break;
                //case 5: more=0; break;
                default: printf("\nInvalid Choice!");
                break;
            }
        
        if(ch==4)
        printf("\nResult : %.2f\n",result1);
        else if(ch==1 || ch==2 ||ch==3)
        printf("\nResult : %d\n",result);
        printf("\nWant to continue? (press 0 to exit)\n");
        scanf("%d",&more);
    }
    while(more!=0);
    return 0;
}
