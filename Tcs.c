#include<stdio.h>
int OddEven(int);
int main()
{
	long int No=0;
printf("Enter no\n");
scanf("%d",&No);
int iRet=0;
iRet=OddEven(No);
printf("Difference: %d",iRet);
}

int OddEven(int No)
{
	int i=0,sumodd=0,sumeven=0,arr[100];
	for(No;No>0;i++,No=No/10)
	{
	arr[i]=No%10;
	if(arr[i]%2==0)
	{
	sumeven=sumeven+arr[i];
	}
	else
	{
	sumodd=sumodd+arr[i];
	}
	}
return sumodd-sumeven;
}
