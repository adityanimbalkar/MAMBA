#include<stdio.h>
int main()
{
	int i=0,j=0;

for(i=1;i<=4;i++)
	{
	for(j=1;j<=7;j++)
		{
		if((j>=5-i)&&(j<=i+3))
		printf("*");
		else
		printf(" ");
		}
	printf("\n");
	}
return 0;
}
