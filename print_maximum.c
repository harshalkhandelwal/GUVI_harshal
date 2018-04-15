#include<stdio.h>
int main()
{
    int i,n,a[100];
    printf("enter the number of elements: ");
    scanf("%d",&n);
    printf("enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[0]<a[i])
        {
            a[0]=a[i];
        }
    }
    printf("%d",a[0]);
}
