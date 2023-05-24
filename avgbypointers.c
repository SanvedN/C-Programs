#include<stdio.h>
float avg(int *a, int *b);
int main()
{
    int a,b;
    float c;
    printf("Enter 2 nos to calculate average \n");
    scanf("%d",&a);
    scanf("%d",&b);
    c = avg(&a,&b);
    printf("Average of %d and %d is = %f",a,b,c);
    return 0;
}
float avg(int *a,int *b)
{
    return (*a+*b)/2.0;
}