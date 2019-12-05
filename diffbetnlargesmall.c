#include<stdio.h>
int Diffdigit(int);


int main()
{
int no=0;
printf("Enter no\n");
scanf("%d",&no);
int iRet=0;
iRet=Diffdigit(no);
printf("difference in the nos is %d\n",iRet);
return 0;
}

int Diffdigit(int No)
{
	int i=0,mod=0,mod1=0,mod2=0;

	mod=No%10;
	mod1=mod;
	for(i=0;No>0;i++)
	{
		mod=No%10;
	
		if(mod>=mod1)
		{
			mod1=mod;
		}
		if(mod<=mod1)
		{
			mod2=mod;
		}
		No=No/10;
	}
	return mod1-mod2;
}
