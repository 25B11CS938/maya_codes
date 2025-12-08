#include<stdio.h>
int main()
{
    int n,i=0,diff;
    scanf("%d",&n);
    while(i<n)
    {
        diff=n-i;
        printf("%d ",diff);
        i++;
    }
    return 0;
}
