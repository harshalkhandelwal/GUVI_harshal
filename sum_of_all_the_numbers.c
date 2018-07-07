#include<stdio.h>
int main()
{
    int n,a[100],i,sum=0;
    printf("enter the size of number: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    printf("sum is: %d",sum);
}
