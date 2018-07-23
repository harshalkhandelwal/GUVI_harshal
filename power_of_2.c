#include<stdio.h>
#include<math.h>
int main()
{

    int n,flag,rem;
    printf("enter the number:\n");
    scanf("%d",&n);
    while(n>1)
    {
        rem=n%2;
        if(rem!=0)
        {
            flag=0;
            break;
        }
        else
        {
            n=n/2;
            flag=1;
        }

    }
    if(flag==0)
    {
        printf("No");
    }
    else if(flag==1)
    {
        printf("Yes");
    }
}
