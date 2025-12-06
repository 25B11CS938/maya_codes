#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,difference;
    scanf("%d %d",&A,&B);
    difference=abs((A*B)-(A+B));
    printf("%d",difference);
    return 0;

}
