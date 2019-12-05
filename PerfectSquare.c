#include<stdio.h>
void PerfectSquare(int,int);

int main()
{
	int No1=0,No2=0;
printf("Enter numbers\n");
scanf("%d%d",&No1,&No2);

PerfectSquare(No1,No2);
return 0;
}

void PerfectSquare(int no1,int no2)
{
	int i=0,j=0;
for(i=no1;i<=no2;i++)
	{
	for(j=2;j<=i/2;j++)
		{
		if((i%j==0)&&(i/j==j))
			{
			printf("%d\t",i);
			break;
			}
		break;
		}
	break;
	}
}
