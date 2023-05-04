#include<stdio.h>
int main()
{
    int a;
    printf("Enter number to check even or odd  :  ");
    scanf("%d",&a);
    // if(a%2==0)
    // printf("%d is even",a);
    // if(a%2 != 0)
    // printf("%d is odd",a);

    (a%2==0)?printf("even"):printf("odd");
    return 0;
}