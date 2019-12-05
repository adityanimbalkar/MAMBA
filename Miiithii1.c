#include<stdio.h>
void processArray(int[],int);
int main()
{
	int i=0,n=0;
	int Arr[n];
	printf("Enter no of elements\n");
	scanf("%d",&n);
	printf("Enter elements\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&Arr[i]);
	}
	processArray(Arr,n);
	return 0;
}

void processArray(int Arr[],int n)
{

int i=0;
for(i=0;i<n;i++)
{
	if((Arr[i]>100)&&(Arr[i]%10==6))
	{
		Arr[i]=-1;
	}
	else if((Arr[i]<100)&&(Arr[i]%10==6))
	{
		Arr[i]=-2;
	}
	else if(Arr[i]<100)
	{
		Arr[i]=-3;
	}
}

for(i=0;i<n;i++)
{
	printf("%d\t",Arr[i]);
}
}
