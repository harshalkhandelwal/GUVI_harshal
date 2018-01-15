#include<stdio.h>
void main()
{
    int i,j,k,sum=0,a[20],n;
    printf("enter the numbers of integers: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the first K integers: ");
    scanf("%d",&k);
    for(j=0;j<=k;j++)
    {
        sum=sum+j;
    }
    printf("%d",sum);
}
