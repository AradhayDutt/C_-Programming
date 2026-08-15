#include <stdio.h>

int main() {
    int num;

    // Input integer from user
    scanf("%d", &num);

    // Outer check for non-negative numbers
    if (num >= 0) {
        // Inner check to distinguish between zero and positive
        if (num == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }

    return 0;
}