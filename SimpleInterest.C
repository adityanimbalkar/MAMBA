#include<stdio.h>
float SimpleInterest(int,float,int);


int main()
{
	int Principal=0,time=0;
	float ROi=0;

printf("Enter principal amount,rate of interest and time\n");
scanf("%d %f %d",&Principal,&ROi,&time);
float fRet=0;
fRet=SimpleInterest(Principal,ROi,time);

printf("\n\n\nThe simple interest is %f",fRet);
return 0;
}

float SimpleInterest(int amount,float roi,int pcpa)
{
	float fRet=(amount*roi*pcpa)/100;
return fRet;
}
