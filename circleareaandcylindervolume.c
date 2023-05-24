#include<stdio.h>
int main()
{
    float rci;
    printf("This calculates the area of a circle and volume of cylinder \n");
    printf("Enter radius of circle  :   ");
    scanf("%f",&rci);
    printf("Area in sq.units = %f",3.14*rci*rci);

    float rcy,hcy;
    printf("\nEnter radius of cylinder    :   ");
    scanf("%f",&rcy);
    printf("Enter height of cylinder    :   ");
    scanf("%f",&hcy);
    printf("Volume in cubic units = %f",3.14*rcy*rcy*hcy);

    return 0;
}