#include<stdio.h>
int main()
{
	int i=0;
	char ch;
	char Arr[10]={'a','e','i','o','u','A','E','I','O','U'};
	printf("Enter character");
	scanf("%c",&ch);
	for(i=0;i<10;i++)
	{
		if(ch==Arr[i])
		{
			printf("VOWEL\n");
		}
		else
		{
			printf("no\n");
		}
	}
}
