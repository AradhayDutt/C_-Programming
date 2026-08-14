#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    // Input
    scanf("%f %f %f", &principal, &rate, &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Compound Interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

    // Output
    printf("Simple Interest=%.0f, Compound Interest=%.2f", simpleInterest, compoundInterest);

    return 0;
}