#include<Stdio.h>
int main()
{
	int iNo=0,iRet=0;
printf("Enter no\n");
scanf("%d",&iNo);
iRet=SmallestNo(iNo);
printf("\n\n\n%d",iRet);
return 0;
}

int SmallestNo(int iNo)
{
	int iDigit=0,iSmall=100;

for(iNo;iNo!=0;iNo=iNo/10)
	{
	iDigit=iNo%10;
	if(iDigit<=iSmall)
		{
		iSmall=iDigit;
		}
	}
return iSmall;
}
