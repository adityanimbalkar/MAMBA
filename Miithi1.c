#include<stdio.h>
int main()
{
	int arr[4]={176,50,56,1};
	int *p=arr;
	{
		if((*p>100)&&(*p%10==6))
		{
			*p=-1;
		}
		else if((*p<100)&&(*p%10==6))
		{
			*p=-2;
		}
		else if(*p<100)
		{
			*p=-3;
		}
		p++;
	}while(*p>0);
	int i=0;
	for(i=0;i<4;i++)
	{
		printf("%d\t",arr[i]);
	}
	return 0;
}

