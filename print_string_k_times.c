#include<stdio.h>
#include<string.h>
void main()
{
    int k,i;
    char s[100];
    printf("enter the string: ");
    scanf("%s",&s);
    printf("enter the number of times to print the string: ");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        printf("%s\n",s);
    }
}
