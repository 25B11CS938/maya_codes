#include <stdio.h>

int main() {
    int year, lastTwo;
    scanf("%d", &year);

    lastTwo = year % 100;

    printf("%02d", lastTwo);  // prints 2 digits with leading zero if needed

    return 0;
}

