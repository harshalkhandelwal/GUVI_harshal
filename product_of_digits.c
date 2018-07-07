#include<stdio.h>
int main()
{
    int n,pro=1,rem=0;
    printf("enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        pro=pro*rem;
        n=n/10;
    }
    printf("product of the digits is: %d",pro);
}
