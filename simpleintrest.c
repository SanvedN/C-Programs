#include<stdio.h>
int main()
{
    printf("This is to calculate simple intrest \n");
    float r,t,p;
    printf("Enter values of Principal Value , Rate of Intrest and Time Period   :    ");
    scanf("%f",&p);
    scanf("%f",&r);
    scanf("%f",&t);
    printf("Simple Intrest = %f",p*r*t/100);
    return 0;
}