#include <stdio.h>

int main() {
    int n;
    
    // Read input
    scanf("%d", &n);
    
    // Calculate sum using the formula n * (n + 1) / 2
    int sum = n * (n + 1) / 2;
    
    // Display output in required format
    printf("Sum=%d\n", sum);
    
    return 0;
}