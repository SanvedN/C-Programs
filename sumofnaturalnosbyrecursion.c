#include<stdio.h>
int sum(int n);
int main()
{
    int n,s;
    printf("Enter limit of numbers  :  \n");
    scanf("%d",&n);
    s = sum(n);
    printf("Sum of first %d natural numbers is = %d",n,s);
    return 0;

}
int sum(int n)
{
    if(n==1)
    return 1;
    else
    return n+sum(n-1);
}