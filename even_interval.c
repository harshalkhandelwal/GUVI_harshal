#include<stdio.h>
void main()
{
    int n,m,i;
    printf("enter the value of 2 intervals\n");
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
        }
    }
}

