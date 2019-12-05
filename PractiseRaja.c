#include<stdio.h>
void primeno(int);
int main()
{
	int no=0;
printf("Enter no\n");
scanf("%d",&no);
primeno(no);
return 0;
}

void primeno(int no)
{
	int count1=0,count2=0,count3=0;
	int i=0,j=0,k=0,temp1=0,temp2=0;
for(i=2;i<=no/2;i++)
{
	if(no%i==0)
	{
	count1++;
	}
}
if(count1==0)
	{
	printf("%d",no);
	}
temp1=no;
temp2=no;

temp1--;

for(temp1;temp1!=0;temp1--)
	{
	for(j=2;j<=temp1/2;j++)
		{
		if(temp1%j==0)
			{
			count2++;
			}
		}
	if(count2==0)
	{
	printf("\t%d",temp1);
	break;
	}
	count2=0;
	}

temp2++;
for(temp2;temp2!=0;temp2++)
	{
	for(k=2;k<=temp2/2;k++)
		{
		if(temp2%k==0)
			{
			count3++;
			}
		}
	if(count3==0)
	{
	printf("\t%d",temp2);
	break;
	}
	count3=0;
	}
}
