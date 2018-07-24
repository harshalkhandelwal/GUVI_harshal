#include<stdio.h>
int main()
{
    int i,j,a[100],temp,n;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the lowest and the highest element are: %d\t%d",a[0],a[n-1]);
}
