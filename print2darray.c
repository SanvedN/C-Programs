#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter no of rows and columns in the 2d array  :  ");
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    for(int i = 0 ; i < n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter element of row %d and column %d  : \n ",j+1,i+1);
            scanf("%d",&a[j][i]);
        }
        
    }
    for(int i = 0 ; i < n;i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d  ",a[j][i]);
        }
        printf("\n");
        
    }
    return 0;
}