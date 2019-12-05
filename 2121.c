#include<stdio.h>
void processArray(int);
int main()
{
	int Arr[5]={3,4,2,1,6};
	
	processArray( Arr);
	return 0;
}
void processArray(int Arr)
{
	int *p=Arr+5;
	int temp=0;
	if(*p%2==0)
	{
		temp=*p;
		p--;
		if(*p%2==0)
		{
			*p=*p+temp;
			p--;
		}
	}
	else
	{
		p--;
	}
	int k=0;
	for(k=0;p==Arr;k++)
	{
		printf("%d\t",Arr[k]);
	}
}
