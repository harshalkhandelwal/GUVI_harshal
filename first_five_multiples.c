#include<stdio.h>
void main()
{
    int n,i,c;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        c=n*i;
        printf("%d\n",c);
    }
}
