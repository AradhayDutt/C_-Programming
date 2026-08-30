// Q44: Write a program to find the sum of the series:
// 1 + 3/4 + 5/6 + 7/8 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    float sum = 0.0;
    int numerator = 1, denominator = 2;

    // Input
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1;   // First term
        } else {
            numerator += 2;
            denominator += 2;
            sum += (float)numerator / denominator;
        }
    }

    // Output
    printf("Approximate sum: %.1f\n", sum);

    return 0;
}