#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter string1: ");
    scanf("%s",str1);
    printf("\nEnter string2: ");
    scanf("%s",str2);
    if(strncmp(str1,str2,7)==0)
    {
        printf("\nString 1 and String 2 are same");
    }
    else
    {
        printf("\nString 1 and String 2 are different");    
    }
    
    return 0;
}
