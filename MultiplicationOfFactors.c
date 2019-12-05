#include<stdio.h>
int Mul(int);
int main()
{
	int No=0;
	printf("\nENTER NO\n");
	scanf("%d",&No);
	int iRet=0;
	iRet=Mul(No);
	printf("\n\n%d\n\n",iRet);
	return 0;
}

int Mul(int No)
{
	int i=0,iMul=1;
	for(i=1;i<=No/2;i++)
	{
		if((No%i)==0)
		{
			iMul=iMul*i;
		}
	}
	return iMul;
}
