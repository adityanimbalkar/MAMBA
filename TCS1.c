#include<stdio.h>
char OddEven(char*);
int main()
{
	char cRet;
	char str[100];
printf("enter no\n");
gets(str);
cRet=OddEven(str);
printf("difference: %c",cRet);
return 0;
}

char OddEven(char str[])
{	
char *ptr=str;
char sumeven,sumodd;
for(*ptr;*ptr!='\n';ptr++)
{
	if(*ptr=='1'||*ptr=='3'||*ptr=='5'||*ptr=='7'||*ptr=='9')
		{
		sumodd=*ptr+sumodd;
		}
	else 
		{
		sumeven=sumeven+*ptr;
		}
}
char diff;
diff=sumodd-sumeven;
return diff;
}
