#include<stdio.h>
#include<string.h>
int Palindrome(char *);

int main()
{
	char str[20];
printf("Enter string\n");

scanf("%[^\n]",str);
int iRet=0;
iRet=Palindrome(str);
if(iRet>0)
{
	printf("It is not a palindrome.");
}
else
{
	printf("It is a palindrome.");
}
return 0;
}

int Palindrome(char *str)
{
	int iRet=0;
	char *ptr=str;
	
	{
	ptr++;
	}while(*ptr!='\n');

	
	
	char *qtr=str;

for(*qtr,*ptr;((ptr>=str)&&(*qtr!='\n'));((ptr--)&&(qtr++)))
{
	if(*qtr!=*ptr)
	{
	iRet++;
	break;
	}
	else
	{
	iRet=0;
	}
}
return iRet;
}
