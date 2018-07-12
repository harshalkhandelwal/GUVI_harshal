#include <stdio.h>
#include<string.h>

int main(void) {
	// your code goes here
	char a[100];
	int i,count=0,n;
	printf("enter the string: \n");
	gets(a);

	for(i=0;a[i]!='\0';i++)
	{
	    if(a[i]>='0' && a[i]<='9')
	    {
	        count;
	    }
	    else if(a[i]>='a' && a[i]<='z')
        {
            count;
        }
        else if(a[i]==' ')
        {
            count;
        }
        else if(a[i]>='A' && a[i]<='Z')
        {
            count;
        }
        else
        {
            count++;
        }
	}
	printf("the no. of special characters are %d",count);
	return 0;
}
