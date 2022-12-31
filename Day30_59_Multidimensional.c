#include<stdio.h>
int main()
{
    int n,i,a[50][50],m,j;
    printf("\nEnter the no of rows:");
    scanf("%d",&n);
    printf("Enter the no of columns:");
    scanf("%d",&m);
    printf("Enter the elements of matrix:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("[%d][%d]: ",i,j);
        scanf("%d",&a[i][j]);   
        }
    }
    printf("The matrix is: \n");
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
