#include<stdio.h>
int main()
{
    int n,a=0,b=0;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        a=n%10;
        b=b*10+a;
        n=n/10;
    }
    printf("the reverse is: %d",b);
}
