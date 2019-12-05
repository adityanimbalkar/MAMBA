#include<stdio.h>
int main()
{
	int no=0;
	int arr[3];
	int *ptr=arr;
	int digit=0,i=0;
printf("Enter no\n");
scanf("%d",&no);

for(no,*ptr;no>0,ptr<=&arr[1];no=no/10,ptr++)
	{
	digit=no%10;
	*ptr=digit;
	}
for(i=0;i<2;i++)
	{
	printf("%d",arr[i]);
	}
return 0;
}
