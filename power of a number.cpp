#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,result,power;
    scanf("%d %d %d",&x,&y,&m);
    power=pow(x,y);
    result=power%m;
    printf("%d ",result);
    return 0;
}
