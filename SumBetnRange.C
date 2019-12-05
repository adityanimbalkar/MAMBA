#include<stdio.h>
int main()
{
	int no1=0,no2=0,sum=0;
printf("Enter the range\n");
scanf("%d%d",&no1,&no2);
for(no1=no1+1;no1<no2;no1++)
	{
	sum=sum+no1;
	}
printf("\n\n\n\n%d",sum);
}
