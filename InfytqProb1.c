#include<stdio.h>
void function1(char*);


int main()
{
	char str[15];

printf("Enter string\n");
gets(str);
function1(str);

return 0;
}

void function1(char *str)
{
	int size=0;
	char brr[10];
	char *ptr=brr;
	char *qtr=str;
for(*qtr;*qtr!='\n';qtr++)
{
	if((*qtr=='0')||(*qtr=='1')||(*qtr=='2')||(*qtr=='3')||(*qtr=='4')||(*qtr=='5')||(*qtr=='6')||(*qtr=='7')||(*qtr=='8')||(*qtr=='9'))
	{
	*ptr=*qtr;
	size++;
	ptr++;
	}
}

char *rtr=brr;
int j=0,count=0;


for(*rtr;rtr<=&(brr[size-1]);rtr++)
{
	for(j=0;j<size;j++)
	{
		if(*rtr==brr[j])
		{
		count++;
		}
	}
	if(count>1)
	{
	*rtr='0';
	}
count=0;
}

int l=0,size2=0; 
char crr[10];
char *utr=brr;


for(*utr;utr<=&(brr[size-1]);utr++)
{
	if(*utr!='0')
	{
	crr[l]=*utr;
	l++;
	}
}
size2=l;

for(l=0;l<size2;l++)
{
	printf("%c\t",crr[l]);
}

}
