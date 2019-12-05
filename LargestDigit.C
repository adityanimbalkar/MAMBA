#include<stdio.h>
int largedigit(int);


int main()
{
int no=0;
printf("Enter no\n");
scanf("%d",&no);
int iRet=0;
iRet=largedigit(no);
printf("largest no is %d\n",iRet);
return 0;
}

int largedigit(int No)
{
	int i=0,mod=0,mod1=0;

	mod=No%10;
	mod1=mod;
	for(i=0;No>0;i++)
	{
		mod=No%10;
	
		if(mod>=mod1)
		{
			mod1=mod;
		}
		No=No/10;
	}
	return mod1;
}
