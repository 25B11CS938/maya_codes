#include<stdio.h>
int main()
{
    float phy,che,bi,math,cs;
    int total;
    scanf("%f %f %f %f %f",&phy,&che,&bi,&math,&cs);
    total=(phy+che+bi+math+cs)/5;
    if(total>=90)
    printf("Grade A");
    else if(total<90 && total>=80)
    printf("Grade B");
    else if(total<80 && total>=70)
    printf("Grade C");
    else if(total<70 && total>=60)
    printf("Grade D");
    else if(total<60 && total>=40)
    printf("Grade E");
    else
    printf("Grade F");
    return 0;
}
