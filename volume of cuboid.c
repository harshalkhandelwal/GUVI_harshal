#include<stdio.h>
int main()
{
    int l,b,h,tsa,vol;
    printf("enter the length: ");
    scanf("%d",&l);
    printf("enter breadth: ");
    scanf("%d",&b);
    printf("enter height: ");
    scanf("%d",&h);
    tsa=2*(l*b+b*h+h*l);
    vol=l*b*h;
    printf("%d\n",tsa);
    printf("%d",vol);
}
