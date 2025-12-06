#include<stdio.h>
int main()
{
    int x,y,maxdistance;
    scanf("%d %d",&x,&y);
    maxdistance=5*x;
    if (maxdistance >=y)
    printf("YES");
    else
    printf("NO");
    return 0;
}
