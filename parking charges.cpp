#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,h,charges;
    scanf("%d %d %d",&x,&y,&h);
    charges=x+(h-1)*y;
    printf("%d",charges);
    return 0;
}
