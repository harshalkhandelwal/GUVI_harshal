#include<stdio.h>
void main()
{
    int n,h=0,m;
    printf("enter the time in minutes: ");
    scanf("%d",&n);
    if(n>60)
    {
        h=n/60;
        m=n%60;
        printf("%d %d",h,m);
    }
    else
    {
        printf("%d %d",h,n);
    }
}
