#include<stdio.h>
int PrintEven(int);
int main()
{
	int No=0;
	printf("Enter no\n");
	scanf("%d",&No);
	PrintEven(No);
	return 0;
}

int PrintEven(int no)
{
	int i=1,Even=0;
	for(i;i<=no;i++)
	{
		Even=Even+2;
		printf("%d\n",Even);
	}
}
