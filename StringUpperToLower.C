#include<stdio.h>
#include<string.h>
void UpperToLower(char *);
int main()
{
	char string[20];
printf("Enter string\n");
gets(string);
UpperToLower(string);
return 0;
}

void UpperToLower(char *str)
{
	char *ptr=str;
int size;
size=strlen(str);

for(*ptr;*ptr!='\n'&&ptr<&str[size];ptr++)
{
	if((*ptr=='!')||(*ptr=='@')||(*ptr=='#')||(*ptr=='$')||(*ptr=='%')||(*ptr=='^')||(*ptr=='&')||(*ptr=='*')||(*ptr=='a')||(*ptr=='b')||(*ptr=='c')||(*ptr=='d')||(*ptr=='e')||(*ptr=='f')||(*ptr=='g')||(*ptr=='h')||(*ptr=='i')||(*ptr=='j')||(*ptr=='k')||(*ptr=='l')||(*ptr=='m')||(*ptr=='n')||(*ptr=='o')||(*ptr=='p')||(*ptr=='q')||(*ptr=='r')||(*ptr=='s')||(*ptr=='t')||(*ptr=='u')||(*ptr=='v')||(*ptr=='w')||(*ptr=='x')||(*ptr=='y')||(*ptr=='z')||(*ptr=='1')||(*ptr=='2')||(*ptr=='3')||(*ptr=='4')||(*ptr=='5')||(*ptr=='6')||(*ptr=='7')||(*ptr=='8')||(*ptr=='9')||(*ptr=='0'))
	{
	*ptr=*ptr;
	}
else if(*ptr==' ')
	{
	*ptr=' ';
	}
else 
	{
	*ptr=*ptr+32;             //LOWER TO UPPER
	}							//*ptr=*ptr-32;
}

printf("\n\n\n\n\n\%s",str);
}
