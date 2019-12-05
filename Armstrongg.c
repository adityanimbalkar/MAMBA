#include<stdio.h>
#include<string.h>
void armstrong(int);
int main()
{
	int no=0;
printf("Enter no\n");
scanf("%d",&no);
armstrong(no);
return 0;
}

void armstrong(int no)
{
	int temp1=0,digit1=0,temp=0,i=0,sum=0,digit=0,count=0,power=1;
temp=no;
temp1=no;

for(digit=no%10;no>0;no=no/10)
{
	count++;
}
for(temp;temp>0;temp=temp/10)
{
digit1=temp%10;
power=1;
for(i=0;i<count;i++)
{
	power=digit1*power;	
}
sum=sum+power;
}

if(sum==temp1)
{
	printf("\nARMSTRONG no");
}
else
{
	printf("\nNOT A ARMSTRONG");
}
}
