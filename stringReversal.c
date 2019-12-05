#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
printf("Enter string:\n");
gets(str);
strrev(str);
printf("\n%s\n",str);
printf("%s\n",strrev(str));
printf("%s",strrev(str));
return 0;
}
