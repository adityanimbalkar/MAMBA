/*
RUNS SUCCESSFULLY BUT NOT ON THIS COMPILER
*/

#include<stdio.h>
#include<string.h>

int main()
{
	char str1[20],str2[20],str3[30];
	int j=0,i=0,k,size1,size2,size3;
	char *ptr1=str1;
	char *ptr2=str2;

printf("Enter string1\n");
gets(str1);
size1=strlen(str1);
printf("Enter string 2\n");
gets(str2);
size2=strlen(str2);
size3=size1+size2+1;
for(i=0,*ptr1;i<size1&&*ptr1!='\n';ptr1++,i++)
{
	str3[i]=*ptr1;
}
for(i,*ptr2;i<size3&&*ptr2!='\n';ptr2++,i++)
{
	str3[i]=*ptr2;
}
j=i;
for(k=0;k<j;k++)
{
	printf("%c",str3[k]);
}
return 0;
}
