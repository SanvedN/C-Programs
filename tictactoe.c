#include<stdio.h>
#include<math.h>
#include<time.h>
int main()
{
    int k=1;
    int n[3][3];
    for(int i = 0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            n[i][j]=k;
            printf("%d",n[i][j]);
            k++;
        }
        printf("\n");
    }
    return 0;
}