// Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, original, digit;
    int sum = 0, fact;

    // Input
    scanf("%d", &num);

    original = num;

    // Calculate sum of factorials of digits
    while (num > 0) {
        digit = num % 10;
        fact = 1;

        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    // Check if Strong Number
    if (sum == original)
        printf("Strong number\n");
    else
        printf("Not strong number\n");

    return 0;
}