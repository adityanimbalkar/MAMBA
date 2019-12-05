#include<stdio.h>
void Palindrome(char *);
int main()
{
	char arr[20];
printf("Enter array\n");
scanf("%s",&arr);
Palindrome(arr);
return 0;
}

void Palindrome(char *arr)
{
	char ch,*p=arr;int count=0,i=0;
	for(i=0;arr[i]!='\0';i++)
{
	count++;
}
	char *q=&arr[count];
for(*p,*q;*p!='\0',q!=arr;p++,q++)
{
	if(*p==*q)
	{
	char ch='y';
	
	}
	else
	ch='n';

}
printf("\t\t%c",ch);
}
