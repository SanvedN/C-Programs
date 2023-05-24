#include<stdio.h>
int main()
{
    int i;
    printf("Enter value :  ");
    scanf("%d",&i);
    int *j = &i;
    int **k = &j;
    printf("Value of integer = %d",*(*k));
    return 0;
}