#include<stdio.h>
#include<stdlib.h>
int main()
{
    int hr,min,hr1,hr2,min1,min2;
    printf("enter the first time in hr and min formats: ");
    scanf("%d%d",&hr1,&min1);
    printf("enter the second time in hr and min formats: ");
    scanf("%d%d",&hr2,&min2);
    hr=abs(hr2-hr1);
    min=abs(min2-min1);
    printf("%d\t%d",hr,min);
    return 1;
}
