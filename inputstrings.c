#include<stdio.h>
int main()
{
    char st[50];
    printf("enter string : ");
    scanf("%s",&st);
    char *s = st;
    printf("Your string is : %u\n",&st[0]);
    s="hello";
    printf("Your string is : %u",&s);
    return 0;
}