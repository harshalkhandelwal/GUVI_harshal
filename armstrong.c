#include<stdio.h>
void main()
{
    int n,c=0,original,remainder=0;
    printf("enter the number: ");
    scanf("%d",&n);
    original=n;
    while(n!=0)
    {
        remainder=n%10;
        c=(c+(remainder*remainder*remainder));
        n=n/10;
    }
    if(c==original)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
