#include<stdio.h>
int main()
{
    char n[]="sanved";
    for (int i = 0; i < sizeof(n)-1; i++)
    {
        printf("address of element %d is %u and value is %c \n",i+1,&(n[i]),n[i]);
    }

    //easy way of printing strings
    printf("The string printed in easy way is : %s \n",n);

    //typical way of printing strings
    printf("The string printed in typical way is : ");
    for(int i = 0;n[i]!='\0';i++)
    {
        printf("%c",n[i]);
    }
    return 0;
}