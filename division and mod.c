#include<stdio.h>
int main()
{
    int a,b,d;
    char sign;
    printf("enter the 2 numbers: ");
    scanf("%d%c%d",&a,&sign,&b);
        if(sign=='/')
            {
                d=a/b;
            }
        else
            {
                d=a%b;
            }
        printf("%d\n",d);

}
