#include<stdio.h>
#include<math.h>
int main()
{
    int hours,minutes,seconds,remaining;
    scanf("%d",&seconds);
    hours=seconds/3600;
    remaining=seconds%3600;
    minutes=remaining/60;
    seconds=remaining%60;
    printf("H:M:S-%d:%d:%d",hours,minutes,seconds);
    return 0;

}
