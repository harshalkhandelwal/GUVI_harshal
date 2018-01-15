#include<stdio.h>
void main()
{
    int n;
    printf("enter the year: ");
    scanf("%d",&n);
    if(n%4==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}
