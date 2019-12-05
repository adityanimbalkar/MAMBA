#include<stdio.h>
void ArrayChkPalindrome(int[],int);

int main()
{
	int arr[20],size=0,i=0;
printf("Enter size:\n");
scanf("%d",&size);
printf("Enter elements\n");
for(i=0;i<size;i++)
{
	scanf("%d",&arr[i]);
}
ArrayChkPalindrome(arr,size);
return 0;
}

void ArrayChkPalindrome(int arr,int size)
{
	int *p=&arr;
	int *q=&(arr);
for(*p,*q;p!=arr[size],q>=arr;p++,q--)
{
	if(*p==*q)
	{
	printf("\tPalindrome");
	}
	else
	{
	printf("\tNot a palindrome");
	}
}
}
