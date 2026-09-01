#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    int numerator = 2;
    int denominator = 3;

    for (i = 1; i <= n; i++)
    {
        sum += (float)numerator / denominator;

        numerator += 2;     // Next even number
        denominator += 4;   // Denominator pattern: 3, 7, 11, 15...
    }

    printf("Approximate sum: %.2f\n", sum);

    return 0;
}