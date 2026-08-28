#include <stdio.h>

int main() {
    int a, b, max;

    // Input two numbers
    scanf("%d %d", &a, &b);

    // Find the greater number
    if (a > b)
        max = a;
    else
        max = b;

    // Find LCM
    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("%d", max);
            break;
        }
        max++;
    }

    return 0;
}