#include<stdio.h>

int Strongno(int);
int main()
{
	int No=0;
printf("Enter no\n");
scanf("%d",&No);
int iRet=0;
iRet=Strongno(No);
if(iRet==1)
{
	printf("\nSTRONG NO");
}
else
{
	printf("\nNOT A STRONG NO");
}
return 0;
}

int Strongno(int no)
{
	int iRet=0,temp=0,i=1,Digit=0,Fact=1,Sum=0;
temp=no;
for(Digit;no>0;no=no/10)
{													
Digit=no%10;										
Fact=Digit;
for(i=1;i<Digit;i++)
{
	Fact=Fact*(Digit-i);
}
Sum=Sum+Fact;
}
if(Sum==temp)
{
iRet=1;
}
else
{
iRet=0;
}
return iRet;
}
