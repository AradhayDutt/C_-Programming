#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Numbers less than or equal to 1 are not prime
    if (num <= 1)
    {
        isPrime = 0;
    }
    else
    {
        // Check divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
        }
    }

    // Display result
    if (isPrime)
    {
        printf("Prime");
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}