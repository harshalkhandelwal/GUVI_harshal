#include<stdio.h>
int main()
{
    int n,a,d;
    float sum=0;
    printf("enter the number of terms: ");
    scanf("%d",&n);
    printf("enter the first term: ");
    scanf("%d",&a);
    printf("enter the difference: ");
    scanf("%d",&d);
    sum=(n*((2*a)+(n-1)*d))/2;
    printf("the sum is: %f",sum);
    return;
}
