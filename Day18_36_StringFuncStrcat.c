#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50];
    char str2[50];
    printf("\nFARHEEN FATIMA\n\n");
    printf("Enter string1: ");
    scanf("%s",str1);
    printf("\nEnter string2: ");
    scanf("%s",str2);
    strcat(str1,str2);
    
        printf("\nString after concatenation: %s",str1);    
    return 0;
}
