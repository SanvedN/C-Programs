#include<stdio.h>
int sum(int a , int b)
{
    return (a+b);
}

int main()
{
    int a,b;
    printf("Enter 2 numbers : \n");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("The sum of %d and %d is = %d",a,b,sum(a,b));
}