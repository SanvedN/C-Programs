#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int n1=rand()%6;
    printf("%d",n1);
}   