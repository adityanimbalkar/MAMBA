#include<stdio.h>
int FactorDiff(int);
int main()
{
	int No=0;
	printf("Enter no\n");
	scanf("%d",&No);
	int iRet=0;
	iRet=FactorDiff(No);
	printf("\n%d",iRet);
	return 0;
}
int FactorDiff(int no)
{
	int i=0,j=0,iFirst=0,iLast=0;
	int no1=no;
	for(i=2;i<=no/2;i++)
	{
		if((no%i)==0)
		{
			iFirst=i;
			break;
		}
	}
	for(j=2;j<=no1/2;j++)
	{
		if((no1%j)==0)
		{
			iLast=j;
		}
	}
	return iLast-iFirst;
}
