#include<stdio.h>
int main()
{
int Arr[3]={176,50,36};
processArray(Arr[3]);
return 0;
}

int processArray(int Arr[4])
{
int k=0,i=0,j=0,mod=0;
for(i=0;i<4;i++)
{
		mod=Arr[i]%10;
		if((mod==6)&&(Arr[i]<100))
		{
	     Arr[i]=-3;	
		}
		if(Arr[i]<100)
		{
		 Arr[i]=-2;
		}
		if(mod==6)
		{
		 Arr[i]=-1;
		}
}
for(k=0;k<4;k++)
{
printf("%d\t", Arr[k]);
}
}
