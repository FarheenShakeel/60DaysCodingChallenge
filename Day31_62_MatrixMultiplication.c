#include<stdio.h>
int main()
{
    int n1,n2,i,a[50][50],m1,m2;
    int j,b[50][50],c[50][50],k;
    printf("Enter the no of rows of Matrix A:");
    scanf("%d",&n1);
    printf("Enter the no of columns of Matrix A:");
    scanf("%d",&m1);
    printf("Enter the elements of matrix A:\n");
    for(i=0;i<n1;i++)
    {
        for(j=0; j<m1; j++)
        {
        scanf("%d",&a[i][j]);   
        }
    }
    printf("Enter the no of rows of Matrix B: ");
    scanf("%d",&n2);
    printf("Enter the no of columns of Matrix B: ");
    scanf("%d",&m2);

    if(m1!=n2)
        printf("\nMatrix can't be multiply:");
        else
        {
        printf("Enter the elements of matrix B:\n");
        for(i=0;i<n2;i++)
        {
            for(j=0; j<m2; j++)
            {
            scanf("%d",&b[i][j]);   
            }
        }
        printf("\nMatrix A: \n");
        for(i=0; i<n1; i++)
        {
            for(j=0; j<m1; j++)
            {   
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("\nMatrix B: \n");
        for(i=0; i<n2; i++)
        {
            for(j=0; j<m2; j++)
            {
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
        
            for(i=0; i<n1; i++)
            {
                for(j=0; j<m2; j++)
                {
                    for(k=0; k<n2;k++)
                    {
                        c[i][j] =c[i][j] + a[i][k] * b[k][j];
                    }
                }
            }

            printf("\nMultiplication of Matrix A and Matrix B:\n");
            for(i=0; i<n1; i++)
            {
                for(j=0; j<m2; j++)
                {   
                    printf("%d\t",c[i][j]);
                }
            printf("\n");
        }
    }
        return 0;
}
