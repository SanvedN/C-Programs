#include<stdio.h>
int main()
{
    printf("This converts temperature in Celcius to Farenheit \n");
    float c;
    printf("Enter temperature in Celcius  :  ");
    scanf("%f",&c);
    printf("Temperature in Farenheit = %f ",(c*9/5)+32);
    return 0;
}