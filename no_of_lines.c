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
	    if(a[i]=='.')
	    {
	        if(a[i+1]=='\0')
            {

                count;
            }
	        else
            {

                count++;
            }
	    }
	}
	printf("the no. of lines are %d",count+1);
	return 0;
}
