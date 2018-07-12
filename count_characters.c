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
	    if(a[i]==' ')
	    {
	        count;
	    }
	    else
	    {
	        count++;
	    }
	}
	printf("the value of count is %d",count);
	return 0;
}
