#include<stdio.h>
#include<math.h>
int main()
{
  float radius,area,perimeter,pi=3.14;
  scanf("%f",&radius);
  area=pi*radius*radius;
  perimeter=2*pi*radius;
  printf("%.2f%.2f",area,perimeter);
  return 0;
}
