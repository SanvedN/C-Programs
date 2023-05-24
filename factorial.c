#include<stdio.h>
int main()
{
    int n,fac = 1;
    printf("Enter number whose factorial is to be calculated :  \n");
    scanf("%d",&n);
    int i = 1;
    while(i<=n)
    {
    fac *= i;
    i++;
    }
    printf("Factorial of %d is = %d ",n,fac);
    return 0;
}