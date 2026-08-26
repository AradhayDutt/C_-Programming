#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, digits = 0;
    int result = 0;

    // Input
    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    while (originalNum != 0)
    {
        digits++;
        originalNum /= 10;
    }

    originalNum = num;

    // Calculate the sum of each digit raised to the power of total digits
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += (int)pow(remainder, digits);
        originalNum /= 10;
    }

    // Check Armstrong number
    if (result == num)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}