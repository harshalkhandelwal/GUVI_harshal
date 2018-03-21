#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,a[100],i;
    printf("enter the number of integers: ");
    scanf("%d",&n);
    printf("enter %d elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d %d\n",a[i],i);
    }
    return;
}
