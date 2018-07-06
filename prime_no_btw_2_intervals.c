#include<stdio.h>
int main()
{
    int a,b,i,p,j;
    printf("enter the 2 intervals: ");
    scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
    {
        p=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                p=1;
            }
        }
        if(p==0)
        {
            printf("%d\n",i);
        }
    }
}
