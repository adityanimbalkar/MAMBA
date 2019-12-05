#include<stdio.h>
void ASCIIconditions(char);
int main()
{
	char ch='a';
printf("enter character\n");
scanf("%c",&ch);
ASCIIconditions(ch);
return 0;
}

void ASCIIconditions(char ch)
{
if(65<=ch<=90)
	{
	printf("\n\nCapital Letters.");
	}
else if(97<=ch<=122)
	{
	printf("\nSmall Letters.");
	}	
}
