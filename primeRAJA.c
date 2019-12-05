#include<stdio.h>
void primeno(int);
int main()
{
	int No=0;
printf("Enter no\n");
scanf("%d",&No);
primeno(No);
return 0;
}

void primeno(int no)
{
	int i=0,j=0,temp1=0,temp2=0,count=0,count1=0,count2=0;
	int smallestclosestprime=0,largestclosestprime=0;
for(i=2;i<=no/2;i++)
	{
	if(no%2==0)
		{
		count++;
		}
	}
	
	if(count==0)
		{
		printf("\t%d",no);
		}
	else
		{
		temp1=no;
		temp2=no;
		
		temp1--;
		for(i=temp1;i>1;i--)
			{
			for(j=2;j<=temp1/2;j++)
				{
				if(i%j==0)
					{
					count1++;
					}
				}
			if(count1==0)
				{
				smallestclosestprime=i;
				break;
				}
			count=0;
			break;
			}
			
		temp2++;
		for(i=temp2;i>0;i++)
			{
			for(j=2;j<=temp2/2;j++)
				{
				if(i%j==0)
					{
					count2++;
					}
				}
			if(count2==0)
				{
				largestclosestprime=i;
				break;
				}
			count=0;
			
			}

		int Diff1=no-smallestclosestprime;
		int Diff2=largestclosestprime-no;
			
		if(Diff2>Diff1)
			{
			printf("\t%d",smallestclosestprime);
			}
		else if(Diff2<Diff1)
			{
			printf("\t%d",largestclosestprime);
			}
		else if(Diff2==Diff1)
			{
			printf("\t%d\t%d",smallestclosestprime,largestclosestprime);
			}	
		}	
}
