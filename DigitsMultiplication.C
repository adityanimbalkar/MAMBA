#include<stdio.h>
int DigitsMultiplication(int);
int main()
{
	int Digit=0;
	printf("Enter no\n");
	scanf("%d",&Digit);
	int iRet=0;
	iRet=DigitsMultiplication(Digit);
	printf("IT IS %d\n",iRet);
	return 0;
}
int DigitsMultiplication(int digit)
{
	int i=0,mod=1,mod_t=1;
	for(i=0;digit>0;i++)
	{
		mod=digit%10;
		mod_t=mod*mod_t;
		digit=digit/10;
	}
	return mod_t;
}
