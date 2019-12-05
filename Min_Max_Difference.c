#include<stdio.h>
int main()
{
	int arr[10];
printf("enter nos\n");
	int i=0;
int temp2=0,temp=0;
for(i=0;i<4;i++)
scanf("%d",&arr[i]);
for(i=0;i<4;i++)
{
	if(arr[i]>=temp)
	{
	temp2=temp;
	temp=arr[i];
	}
}
printf("%d",temp2);

return 0;
}
