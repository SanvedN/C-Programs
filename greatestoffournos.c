#include<stdio.h>
int main()
{
    int n1,n2,n3,n4;
    printf("Enter 4 numbers :  \n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    scanf("%d",&n3);
    scanf("%d",&n4);

    if(n1>=n2 && n1>=n3 && n1>=n4)
    printf("%d is the greatest number",n1);
    else if(n2>=n3 && n2>=n4)
    printf("%d is the greatest number",n2);
    else if(n3>=n4)
    printf("%d is the greatest number",n3);
    else
    printf("%d is the greatest number",n4);

    return 0;
}