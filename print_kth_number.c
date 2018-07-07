#include<stdio.h>
int main()
{
    int a[100],i,k,n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the kth number to find: ");
    scanf("%d",&k);
    if(k<=n)
    {
        printf("the number is: %d",a[k-1]);
    }
    else
    {
        printf("invalid input!");
    }
}
