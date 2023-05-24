#include<stdio.h>
void pr(int i);
int main()
{
    int i = 56;
    int *j = &i;
    int **k = &j;
    pr(i);
    printf("%u",&i);
}
void pr(int i)
{
    printf("%u \n",&i);
}