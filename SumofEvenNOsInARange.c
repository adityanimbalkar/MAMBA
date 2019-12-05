#include<stdio.h>
int SumOfEveninRange(int,int);
int main()
{
	int no1=0,no2=0;
	printf("enter nos\n");
	scanf("%d%d",&no1,&no2);
	int iRet=0;
	iRet=SumOfEveninRange(no1,no2);
	printf("\n\n%d\n\n",iRet);
	return 0;
}

int SumOfEveninRange(int no1,int no2)
{
	int i=0,iSum=0;
	for(i=no1;i<=no2;i++)
	{
		if((i%2)==0)
		{
			iSum=iSum+i;
		}
	}
	return iSum;
}
