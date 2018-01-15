#include<stdio.h>
void main()
{
    int reverse=0,remainder,n,original;
    printf("enter the number: ");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    if(original==reverse)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
