#include<stdio.h>
int FrequencyofDigits(int,int);
int main()
{
	int no=0,digit=0;
	printf("\nEnter the no\n"); 
	scanf("%d",&no);
	printf("\nEnter digit whose appearance to be counted\n");
	scanf("%d",&digit);
	int iRet=0;
	iRet=FrequencyofDigits(no,digit);
	printf("it appeared %d time/times\n",iRet);
	return 0;
}
	
int FrequencyofDigits(int no,int digit)
{		
	int iCount=0,mod=0,i=0;
	for(i=0;no>0;i++)
	{
		mod=no%10;
		if(mod==digit)
		{
			iCount=iCount+1;
		}
		no=no/10;
	}	
return iCount;
}
