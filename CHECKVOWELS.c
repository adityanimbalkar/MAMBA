#include<stdio.h>
int main()
{
	char Ch='A';
	printf("Enter character\n");
	scanf("%c",&Ch);

	if((Ch=='A')||(Ch=='E')||(Ch=='I')||(Ch=='O')||(Ch=='U')||(Ch=='a')||(Ch=='e')||(Ch=='i')||(Ch=='o')||(Ch=='u'))
	{
		printf("\nIT IS A VOWEL\n");
	}
	else
	{
		printf("\nNO ,NOT A VOWEL\n");
	}
}

