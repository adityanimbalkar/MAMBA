#include<stdio.h>
#include<string.h>
void Function(char *,int);
int main()
{
	int size=0;
	char str[15];
printf("Enter string\n");
gets(str);
size=strlen(str);
Function(str,size);
return 0;
}

void Function(char *str,int size)
{
	int k=0,i=0,brr[10],j=0,arr[10],size2=0;
	char *ptr=str;
for(i=0,ptr;i<size&&*ptr!='\n';i++,ptr++)
{
	if(48<=*ptr<=57)
	{
	arr[i]=*ptr;
	size2++;
	}
}
int temp=0;
for(k=0,j=0;k<size2,j<size2;k++,j++)
{
	if(arr[j]>=temp)
	{
	
	temp=arr[j];
	arr[j]=0;
	}
printf("%d\t",temp);
}
}


