#include <stdio.h>

int main() {
    float salary, hra, da, pf, gross;

    scanf("%f", &salary);
    scanf("%f", &hra);
    scanf("%f", &da);

    pf = salary * 0.12;
    gross = salary + hra + da + pf;

    printf("%.2f", pf);
    printf("%.2f", gross);

    return 0;
}
