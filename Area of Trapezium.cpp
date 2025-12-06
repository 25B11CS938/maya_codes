#include<stdio.h>
int main()
{
    int base1,base2,height;
    double area;
    scanf("%d%d%d",&base1,&base2,&height);
    area=0.5*(base1+base2)*height;
    printf("%.4lf",area);
    return 0;
}
