#include<stdio.h>
int main()
{
int Arr[4]={3,6,36,61};
int iret[6];
iret[6]=processArray(Arr[4]);
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
itemp=*p;
p++;
if(*p%2==0)
{
itemp2=*p;
p--;
*p=itemp+itemp2;
p++;
}
else
{
	p++;
}
}
return Arr;
}

