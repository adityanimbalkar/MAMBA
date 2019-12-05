#include<stdio.h>
int Armstrong(int);
int main()
{
	int no=0,iRet=0;
	printf("Enter no\n");
scanf("%d",&no);
iRet=Armstrong(no);
if(iRet==1)
{
	printf("Armstrong");
}
else
{
	printf("not");
}
return 0;
}

int Armstrong(int no)
{
int iRet=0,sum=0,power=0,i=0,digit=0,digit1=0,temp=0,temp1=0,count=0;
	
temp=no;
temp1=temp;
{	
digit=no%10;
count++;
no=no/10;
}while(no>0);

for(temp;temp>0;temp=temp/10)
{
digit1=temp%10;
for(i=0;i<count;i++)
{
power=power*digit1;
}
sum=sum+power;
}
if(sum==temp1)
{
	iRet=1;
}
else
{
	iRet=0;
}
return iRet;
}
