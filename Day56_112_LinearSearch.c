#include <stdio.h>
int main()
{  int num;
 
    int i,  keynum, found = 0;
 	printf("\nLINEAR SEARCH\n");
    printf("Enter the number of elements in array: ");
    scanf("%d", &num);
    int array[num];
    printf("Enter the %d elements of an array\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to be searched: ");
    scanf("%d", &keynum);
    for (i = 0; i < num ; i++)
    {
        if (keynum == array[i] )
        {
            found = 1;
            break;
        }
    }
    if (found == 1)
        printf("%d is present in the array at position %d",keynum,i+1);
    else
        printf("Element is not present in the array\n");
    return 0;
}
