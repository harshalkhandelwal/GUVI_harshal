#include<stdio.h>
int main()
{
    int a[100],n,sum=0,i;
    float avg;
    printf("enter the number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/n;
    printf("the average of the numbers are: %.2f",avg);
}
