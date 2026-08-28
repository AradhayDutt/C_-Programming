#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input the number
    scanf("%d", &num);

    // Find sum of digits
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    // Display result
    printf("%d", sum);

    return 0;
}