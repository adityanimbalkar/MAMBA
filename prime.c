#include<stdio.h>
int main()
{
	int i=0,count=0;
	int no=0;
printf("Enter no\n");
scanf("%d",&no);
for(i=2;i<=no/2;i++)
	{
	 if(no%i==0)
		{
		count++;
		}
	}

	if(count==0)
	{
	printf("Prime no.");
	}
	else
	{
	printf("Not a prime no.");
	}
return 0;
}
