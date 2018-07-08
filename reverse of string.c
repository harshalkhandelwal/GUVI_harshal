#include<stdio.h>
#include<string.h>
int main()
{
    int i,n,j=0;
    char str[100],rev[100];
    printf("enter the string: ");
    gets(str);
    n=strlen(str);
    for(i=n-1;i>=0;i--)
    {
        rev[j]=str[i];
        j++;
    }
    rev[i]='\0';
        printf("reverse of string is: %s",rev);
}
