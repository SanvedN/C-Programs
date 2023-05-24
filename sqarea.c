#include<stdio.h>
#include<math.h>
int main()
{
    int s;
    printf("Enter the length of side of square : ");
    scanf("%d",&s);
    printf("The area of square with side %d units is = %f",s,pow(s,2));
    return 0;
}