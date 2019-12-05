#include<stdio.h>
#include<string.h>
void Frequency(int);
int main()
{
	int no=0;
printf("Enter no\n");
scanf("%d",&no);
Frequency(no);
return 0;
}

void Frequency(int no)
{
	int digit=0,count=0,count2=0,temp=0,i=0,j=0;
	int arr[10];

temp=no;
for(no;no>0;no=no/10)
{
	digit=no%10;
	count++;
}

for(temp;temp>0;temp=temp/10)
{
	for(i=0;i<count;i++)
{
	arr[i]=temp%10;
	for(j=i;0<=j<count;j--)
	{
	if(arr[i]==arr[j])
	{
	count2++;
	}
	else
	{
	count2=1;
	}
	}
printf("\n%d\n",count2);
}
}
}
