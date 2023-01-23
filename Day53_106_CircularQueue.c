#include <stdio.h>
#define size 5	
void insertq(int[], int);
void deleteq(int[]);
void display(int[]);
int front =  - 1;
int rear =  - 1;
int main()
{
    int n, ch,j=0;
    int queue[size];
    printf("\n\CIRCULAR QUEUE DATA STRUCTURE USING AN ARRAY");
    printf("\n---------------------------------------------");
    do
    {
        printf("\n1. Insert \n2. Delete\n3. Display\n4. Exit");
        printf("\nEnter Choice 1-4? : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\nEnter number %d in queue: ",++j);
                scanf("%d", &n);
                insertq(queue, n);
                break;
            case 2:
                deleteq(queue);
                break;
            case 3:
                display(queue);
                break;
        }
    }while (ch != 4);
}
void insertq(int queue[], int item)
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        printf("Queue is over-full condition");
        return;
    }
    else if (rear ==  - 1)
    {
        rear++;
        front++;
    }
    else if (rear == size - 1 && front > 0)
    {
        rear = 0;
    }
    else
    {
        rear++;
    }
    queue[rear] = item;
}
void display(int queue[])
{
    int i;
    printf("Queue:\n");
    if(front == -1)
    {
    	printf("Queue is Empty:");
	}
	else
    if (front > rear)
    {
        for (i = front; i < size; i++)
        {
            printf("%d\t", queue[i]);
        }
        for (i = 0; i <= rear; i++)
            printf("%d\t", queue[i]);
    }
    else
    {
        for (i = front; i <= rear; i++)
            printf("%d\t", queue[i]);   
    }
    printf("\n");
}

void deleteq(int queue[])
{
    if (front ==  - 1)
    {
        printf("Queue is under-flow condition ");
    }
    else if (front == rear)
    {
        printf("\nDeleted item is %d", queue[front]);
        front =  - 1;
        rear =  - 1;
    }
    else
    {
        printf("\nDeleted item is %d", queue[front]);
        front++;
    }
}
