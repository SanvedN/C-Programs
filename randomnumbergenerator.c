#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    //generating random number
    srand(time(0));
    int n = rand()%100+1;
    printf("This is a RANDOM NUMBER GUESSING GAME\n");
    printf("Random number is generated. Try to guess the Random Number\n");

    //inputting number for guessing
    int i=0,in;
    while(i>=0)   
    {
        i++;
        printf("Enter your guessed number between 1 and 100 :    ");
        scanf("%d",&in);
        if(in==n)
        {
            printf("Congratulations you have guessed the number correctly \n");
            printf("The number of guesses you took is/are : %d",i);
            break;
        }
        else
        {
            if (in<n)
                printf("The number is greater than your input try again\n");
            else
                printf("The number less than your input try again\n");  
        }
    }
    return 0;
}