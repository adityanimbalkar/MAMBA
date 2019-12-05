#include<stdio.h>
int main()
{
	char str[10];
printf("Enter string\n");
gets(str);
Unique(str);
return 0;
}

void Unique(char str[])
{
	char *ptr=str;
	int i=0,count=0;
	int size=strlen(str);

for(*ptr;*ptr!='\n';ptr++)
	{
	for(i=0;i<size;i++)
		{
		if(*ptr==str[i])
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

	if(count<2)
		{
		printf("\nTRUE");
		}
}
