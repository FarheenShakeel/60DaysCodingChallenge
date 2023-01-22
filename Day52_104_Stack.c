#include<stdio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
    top=-1;
    printf("\n\STACK DATA STRUCTURE USING AN ARRAY");
    printf("\n\t--------------------------------");
    printf("\nEnter the size of STACK[MAX=100]: ");
    scanf("%d",&n);
    do
    {
    	printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\nPlease Enter a Valid Choice(1/2/3/4)");
            }
        }
    }
    while(choice!=4);
    return 0;
}
void push()
{
    if(top>=n-1)
    {
        printf("\nSTACK is over flow");
        
    }
    else
    {
        printf("Enter a value to be pushed: ");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nStack is under flow");
    }
    else
    {
        printf("\nThe popped element is %d ",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\nThe elements in STACK:");
        for(i=top; i>=0; i--)
            printf("\n%d",stack[i]);
    }
    else
    {
        printf("\nThe STACK is empty");
    }
   printf("\n");
}
