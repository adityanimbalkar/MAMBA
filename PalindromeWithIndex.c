#include<stdio.h>
#include<string.h>
int Palindrome(char *);

int main()
{
	char str[20];
printf("Enter string\n");
gets(str);
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
	int iRet=0,size=0,i=0;
size=strlen(str);
size--;
for(i=0;(i<=(size/2));i++)
{
	if(str[i]!=str[size-i])
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
