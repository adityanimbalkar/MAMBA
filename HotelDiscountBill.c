#include<stdio.h>
int Discount(int);
int main()
{
	int Bill=0;
	printf("\nEnter the total amount\n");
	scanf("%d",&Bill);
	int iRet=0;
	iRet=Discount(Bill);
	printf("\nThe bill has been reduced to %d\n",iRet);
	return 0;
}

int Discount(int Amount)
{
	if(Amount<500)
	{
		return Amount;
	}
	else if((Amount>500)&&(Amount<1500))
	{
		return Amount-Amount*10/100;
	}
	else
	{
		return Amount-Amount*15/100;
	}
}
