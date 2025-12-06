#include<stdio.h>
#include<math.h>
int main()
{
    int years,days,remaining,weeks;
    scanf("%d",&days);
    years=days/365;
    remaining=days%365;
    weeks=remaining/7;
    printf("%d",years);
    printf("%d",weeks);
    return 0;
}
