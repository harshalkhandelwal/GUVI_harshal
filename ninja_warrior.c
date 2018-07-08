#include<stdio.h>
#include<math.h>
int main()
{
    int kabali,opponent,n,i,diff[1000];
    printf("enter the number of ninjas: ");
    scanf("%d",&n);
    if(n<pow(2,32))
    {
        for(i=0;i<n;i++)
        {
            scanf("%d\t%d",&kabali,&opponent);
            diff[i]=opponent-kabali;
        }


    }
    else
    {
        printf("please enter the number of ninjas less than 2^32\n");
    }
    for(i=0;i<n;i++)
        printf("%d\n",diff[i]);
}
