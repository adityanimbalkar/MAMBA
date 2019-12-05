#include<stdio.h>
#include<string.h>
void infytq1(char *);
int main()
{
	char str[20];

printf("Enter string\n");
gets(str);
infytq1(str);      //function calling
return 0;
}

void infytq1(char *str)
{
	int arr[10];
	int j=0,size=0,i=0;
	char *ptr=str;
			
for(*ptr;*ptr!='\n';ptr++)
{
if(*ptr=='0'||*ptr=='1'||*ptr=='2'||*ptr=='3'||*ptr=='4'||*ptr=='5'||*ptr=='6'||*ptr==7||*ptr=='8'||*ptr=='9')
{
arr[i]=*ptr;
i++;
}
}

size=i;

int *qtr=arr;
int count=0,size2=0;

for(*qtr;qtr<=&(arr[size]);qtr++)
{
for(j=0;j<=size;j++)
{
	if(arr[j]==*qtr&&*qtr!=0)
	{
	count++;
	}
}
printf("%d-->%d\n",*qtr,count);
count=0;
}

int brr[10],k=0,l=0,temp=0;
for(k=0;k<=size;k++)
{
	brr[l]=arr[k];
	l++;
}
size2=l;
label:	
for(l=0;l<=size2;l++)
{
	if(brr[l]>=temp)
	{
	temp=brr[l];
	}
}
brr[l]=0;
printf("%d",temp);
}
