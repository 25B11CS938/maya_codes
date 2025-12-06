#include<stdio.h>
#include<math.h>
int main()
{
    int x,remainder;
    scanf("%d",&x);
    remainder=x%2;
    if (remainder==0 && x>=4)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
