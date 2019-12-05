#include<stdio.h>
int main()
{
int Arr[4]={3,6,36,61};
int iret=0;
iret=processArray(Arr[4]);
printf("%d",iret);
return 0;
}
int processArray(int Arr[4])
{
int *p=Arr,itemp2=0,itemp=0;
if(*p%2!=0)
{
p++;
}
if(*p%2==0)
{
	{
		*p=*p+*(p++);
	}while(*p%2==0);
}
int i=0;
for(i=0;i<4;i++)
{
	printf("%d\t",Arr[i]);
}
}

