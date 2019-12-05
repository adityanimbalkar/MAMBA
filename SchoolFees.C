#include<stdio.h>
int Fees(int);
int main()
{
	int Std=0;
	printf("Enter standard\n");
	scanf("%d",&Std);
	int iRet=0;
	iRet=Fees(Std);
	printf("\nThe corresponding fee for class %d is %d\n",Std,iRet);
	return 0;
}
int Fees(int std)
{
	switch(std)
	{
		case 1:
			return 8900;
			break;
		case 2:
			return 12790;
			break;
		case 3:
			return 21000;
			break;
		case 4:
			return 23450;
			break;
	}
}
