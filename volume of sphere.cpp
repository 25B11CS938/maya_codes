#include<stdio.h>
#include<math.h>
int main()
{
    double R,volume;
    double pi=3.14;
    scanf("%lf",&R);
    volume=((4)*pi*(R*R*R))/3;
    printf("%.2lf",volume);
    return 0;
}
