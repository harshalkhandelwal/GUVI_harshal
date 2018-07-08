#include<stdio.h>
int main()
{
    int a,b,d[100],i;
    char sign;
    printf("enter the 2 numbers: ");
    for(i=0;i<4;i++)
    {
        scanf("%d%c%d",&a,&sign,&b);
        if(sign=='/')
            {
                d[i]=a/b;
            }
        else
            {
                d[i]=a%b;
            }
    }
    for(i=0;i<4;i++)
        printf("%d\n",d[i]);

}
