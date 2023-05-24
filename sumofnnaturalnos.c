#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter limit of numbers  :  \n");
    scanf("%d",&n);
    int i = 1;
    do
    {
    sum += i;
    i++;
    }while(i<=n);
    printf("Sum of first %d natural numbers is = %d ",n,sum);
    return 0;
}