#include<stdio.h>
void main()
{
    int c,a,b;
    printf("enter the first number: ");
    scanf("%d",&a);
    printf("enter the second number: ");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
}
