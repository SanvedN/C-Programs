#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    int a = 5;
    int b = 2;
    printf("values of a and b before : %d , %d \n",a,b);
    swap(&a,&b);
    printf("values of a and b after : %d , %d",a,b);
    return 0;
} 