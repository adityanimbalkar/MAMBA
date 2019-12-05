#include<stdio.h>
#include<string.h>
void StringReversal(char *);
int main()
{
	char str[35];
printf("Enter string\n");

scanf("%[^\n]",str);

int size=0;

size=strlen(str);

char *ptr=&str[size-1];
for(*ptr;ptr>=&str[0];ptr--)
{
	printf("%c",*ptr);
}
return 0;
}
