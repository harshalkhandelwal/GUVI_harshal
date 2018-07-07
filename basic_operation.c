#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the 3 numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    d=(a*b)%c;
    printf("%d",d);
}
