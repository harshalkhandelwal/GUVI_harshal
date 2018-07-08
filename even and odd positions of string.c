#include<stdio.h>
#include<string.h>
int main()
{
    int i,n;
    char s[100];
    printf("enter the string: ");
    scanf("%s",&s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
            printf("%c",s[i]);
    }
    printf("\n");
    for(i=1;i<=n;i++)
    {
        if(i%2==1)
            printf("%c",s[i]);
    }
}
