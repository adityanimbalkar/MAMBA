#include<stdio.h>
void EvenFactors(int);
int main()
{
	int No=0;
	printf("Enter No\n");
	scanf("%d",&No);
	EvenFactors(No);	
	return 0;
}
void EvenFactors(int Num)
{
	int i=0;
	for(i=2;i<=(Num/2);i=i+2)
	{
		if((Num%i)==0)
		{
			printf("%d\n",i);
		}
	}
}
