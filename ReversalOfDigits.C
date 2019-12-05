#include<stdio.h>
void ReverseNo(int);
int main()
{
	int No=0;
	printf("Enter no\n");
	scanf("%d",&No);
	ReverseNo(No);
	return 0;
}
void ReverseNo(int No)
{
	int i=0,mod=0;
	for(i=0;No>0;i++)
	{
		mod=No%10;
		printf("%d",mod);
		No=No/10;
	}
}
