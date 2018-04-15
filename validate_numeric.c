#include<stdio.h>
int main()
{
    char a[100],i,n;
    printf("enter the string: ");
    scanf("%c",&a);
    for(i=0;i<a[i]!='\0';i++)
    {
        if((a[i]>'a') && (a[i]<'z'))
        {
            printf("No");
        }
        else
        {
            printf("Yes");
        }
    }
}
