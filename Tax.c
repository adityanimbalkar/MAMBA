#include<stdio.h>
int Tax(int);
int main()
{
	int Income=0;
	printf("Enter the income amount\n");
	scanf("%d",&Income);
	int iRet=0;
	iRet=Tax(Income);
	printf("\nThe tax amount to be paid is %d",iRet);
	return 0;
}

int Tax(int Amount)
{
	if(Amount<500000)
		return 00;
	else if((Amount>=500000)&&(Amount<1000000))
		return Amount*10/100;
	else if((Amount>=1000000)&&(Amount<2000000))
		return Amount*20/100;
	else
		return Amount*30/100;
}
