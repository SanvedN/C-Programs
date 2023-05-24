#include <stdio.h>
int main()
{
    int n, f = 0;
    printf("Enter number to check prime or not using loop :  \n");
    scanf("%d", &n);
    if (n == 0 || n == 1)
        printf("%d is neither a prime number nor a composite number ", n);
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                f++;
        }
        (f == 0) ? printf("%d is a prime number", n) : printf("%d is not a prime number", n);
    }
    return 0;
}