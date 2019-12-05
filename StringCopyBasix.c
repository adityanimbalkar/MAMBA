#include<stdio.h>
#include<string.h>
int main()
{
	char str[25],str2[25];
printf("enter line\n");
gets(str);

printf("\n\n%d",strlen(str));
printf("\nEnter line 2");
gets(str2);
strcpy(str,str2);                 //strcpy(destination,source)
printf("\n\n\n\n\n\n%s",str);
return 0;
}
