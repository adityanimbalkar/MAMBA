#include<stdio.h>
int DiffNFF(int);
int main()
{
	int Num=0;
	printf("Enter no\n");
	scanf("%d",&Num);
	int iRet=0;
	iRet=DiffNFF(Num);
	printf("The diff is %d \n",iRet);
	return 0;
}

int DiffNFF(int no)
{
	int no2=no,i=0,j=0,Fsum=0,NFsum=0;
	for(i=1;i<no;i++)
	{
		if((no%i)==0)
		{
			Fsum=Fsum+i;
		}
		else
		{
			NFsum=NFsum+i;
		}
	}
	return NFsum-Fsum;
}
