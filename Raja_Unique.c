#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];

printf("Enter string\n");
gets(str);

	
	int j=0,i=0,count=0;
	int size=0;

size=strlen(str);

	for(j=0;j<size;j++)
	{
		for(i=0;i<size;i++)
		{
		if(str[j]==str[i])
			{
			count++;
			}
		}
	if(count>1)
		{
		printf("\nFALSE");
		break;
		}
	count=0;
	}

	if(count==0)
	{
	printf("\nTRUE");
	}

return 0;
}
