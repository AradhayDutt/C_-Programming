#include <stdio.h>

int main() {
    int year;

    // Input year
    scanf("%d", &year);

    // Check leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("Leap year");
    else
        printf("Not a leap year");

    return 0;
}