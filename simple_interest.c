#include<stdio.h>
int main()
{
    int p,r,t,si;
    printf("enter the amount, rate, and time: ");
    scanf("%d%d%d",&p,&r,&t);
    si=(p*r*t)/100;
    printf("the simple interest is: %d",si);
}
