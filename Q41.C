// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, temp, firstDigit, lastDigit;
    int digits = 0, divisor = 1, middle, result;

    scanf("%d", &num);

    lastDigit = num % 10;

    temp = num;
    while (temp >= 10) {
        temp /= 10;
        digits++;
        divisor *= 10;
    }

    firstDigit = temp;

    middle = (num % divisor) / 10;

    result = lastDigit * divisor + middle * 10 + firstDigit;

    printf("%d", result);

    return 0;
}