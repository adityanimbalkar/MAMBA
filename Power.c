#include<stdio.h>
int Power(int,int);
int main()
{
	int No=0,m=0;
printf("Enter the no and the no for how many times to be raised\n");
scanf("%d%d",&No,&m);
int iRet=0;
iRet=Power(No,m);
printf("\n\n%d",iRet);
return 0;
}

int Power(int n,int m)
{
	int p=1,i=0;
for(i=1;i<=m;i++)
{
	p=n*p;
}
return p;
}
