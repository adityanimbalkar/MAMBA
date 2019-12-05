#include<stdio.h>
int main()
{
int Arr[4]={3,6,36,61};
processArray(Arr);
return 0;
}
void processArray(int Arr[4])
{
int i=0,j=0;
for(i=0;i<4;i++)
{
	if((Arr[i]%2)==0)
	{
		i++;
		if((Arr[i]%2)==0)
		{
			Arr[i-1]=Arr[i]+Arr[i-1];
		}
	}
}
for(j=0;j<4;j++)
{
printf("%d\t",Arr[j]);
}
}
