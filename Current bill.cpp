#include <stdio.h>

int main() {
    int units;
    float amount, surcharge, total;

    scanf("%d", &units);

    if (units < 200)
        amount = units * 1.20;
    else if (units < 400)
        amount = units * 1.50;
    else if (units < 600)
        amount = units * 1.80;
    else
        amount = units * 2.00;

    if (amount > 400) {
        surcharge = amount * 0.15;
        total = amount + surcharge;
    } else {
        total = amount + 100;  // minimum surcharge
    }

    printf("%.2f", total);

    return 0;
}

