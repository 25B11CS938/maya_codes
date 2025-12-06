#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,cost1,cost2;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    cost1=x1+y1;
    cost2=x2+y2;
    if(cost1<cost2)
    printf("%d",cost1);
    else
    printf("%d",cost2);
    return 0;
}
