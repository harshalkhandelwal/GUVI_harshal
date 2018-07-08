#include<stdio.h>
int main()
{
    float l,b,area;
    printf("enter the length of farm: ");
    scanf("%f",&l);
    printf("enter the breadth of farm: ");
    scanf("%f",&b);
    area=l*b;
    printf("area of the farm is: %.5f",area);
}
