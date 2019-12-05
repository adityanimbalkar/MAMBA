#include<stdio.h>
#include<string.h>
int main()
{
int r;	
char str[25],str2[25];
printf("enter line\n");
gets(str);
printf("\nEnter line 2\n");
gets(str2);
r=strcmpi(str,str2);
if(r==0)                 //strcpy(destination,source)
printf("\nEQUAL");
else
printf("\nNOT EQUAL");
return 0;
}
