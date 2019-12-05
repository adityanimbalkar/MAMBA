#include<stdio.h>
void processArray(int *);
int main()
{
	int i=0;
	int Arr[5];
printf("Enter elements\n");
for(i=0;i<5;i++)
{
	scanf("%d",&Arr[i]);

}
processArray(Arr);
return 0;
}

void processArray(int Arr[])
{
	int *ptr=Arr;
for(ptr;ptr<=&Arr[4];ptr++)
{	
	if((*ptr<100)&&(*ptr%10==7))
	{
	*ptr=-1;
	}
	else if((*ptr>100)&&(*ptr%10==7))
	{
	*ptr=-3;
	}
	else if(*ptr>100)
	{
	*ptr=-2;
	}
}

int i=0;
	for(i=0;i<5;i++)
	{
	printf("%d\t",Arr[i]);
	}
}
