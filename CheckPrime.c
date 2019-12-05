#include<Stdio.h>
#define TRUE 1
#define FALSE 0
int CheckPrime(int);
int main()
{
	int No=0,iRet=0;
	printf("Enter no\n");
	scanf("%d",&No);
	iRet=CheckPrime(No);
	printf("%d\n\n\n\n\n\n1 indicates \n Prime no\n\n\n 0 indicates \n not a prime no",iRet);
	return 0;
}

int CheckPrime(int No)
{
	int i=0;
	for(i=2;i<=No/2;i++)
	{
		if((No%i)!=0)
		{
		 return 0;	
		}
		else
		{
		return 1;
		}
	}
}
