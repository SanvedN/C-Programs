#include<stdio.h>
int sum(int a , int b);
int main()
{
    int a = 1,b=2;
    printf("%d",sum(a,b));
    return 0;
}
int sum(int a , int b)
{
    int c;
    c = a+b;
    b=6;
    a=4;
    return c;
}