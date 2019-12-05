#include<stdio.h>
int main()
{
int Arr[3]={176,50,36};
int k=0,i=0,mod=0;
for(i=0;i<3;i++)
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
for(k=0;k<3;k++)
{
printf("%d\t\t", Arr[k]);
}
return 0;
}
