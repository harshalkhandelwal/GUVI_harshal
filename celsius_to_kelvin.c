#include<stdio.h>
int main()
{
    int temp,k;
    printf("enter temperature in Celsius: ");
    scanf("%d",&temp);
    k=temp+273.15;
    printf("temperature in kelvin will be %d",k);
}
