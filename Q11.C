//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.stdio.h>

// Standard input-output library

int main() {
    int num;

    // Input integer from user
    scanf("%d", &num);

    // Check if the number is divisible by 2
    if (num % 2 == 0) {
        printf("%d is even\n", num);
    } else {
        printf("%d is odd\n", num);
    }

    return 0;
}