#include<stdio.h>
void main()
{
    int n,i,f=1;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    printf("%d",f);
}
