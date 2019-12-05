#include<stdio.h>
int main()
{
	int i=0,temp=0;
	int arr[5]={3,4,2,1,6};
	int *iret;
	iret=processArray(arr);
	for(iret;iret!=0;iret++)
{
	printf("%d\t",*iret);
}
return 0;
}
	
int processArray(int arr[5])	
{	
	int temp=0,*p=arr;
	if((*p%2)!=0)
	{
		p++;
	}
	if((*p%2)==0)
	{
	  	p++;
	  	if(((*p)%2)==0)
	  	{
	  		for(*p;p!=arr;p--)
	  		{
	  			*(p--)=*p+temp;
	  		}
	  	}
	  	else
	  	p++;
	}
	
	
	return arr;
}
