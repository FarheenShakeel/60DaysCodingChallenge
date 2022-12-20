#include<stdio.h>
int FindLength(char str[100]);
int main()
{
    int length;
    char str[100];
    printf("Enter the String: ");
    gets(str);
    length = FindLength(str);
    printf("\nLength of the String is : %d",length);
    return 0;
}
int FindLength(char str[100])
{
    int length=0,len;
    for(len=0;str[len]!='\0';len++)
    length++;
    return length;
}
