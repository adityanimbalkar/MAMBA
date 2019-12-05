#include<stdio.h>
int numOfIds(char[]);
int main()
{
	int i=0,size=0,k=0,temp=0,count=0,m=0,j=0;
char pool[100];
printf("enter pool size\n");
scanf("%d",&size);
printf("Enter string or pool \n");
for(k=0;k<size;k++)
{
scanf("%c",&pool[k]);
}
int iret=0;
iret=numOfIds(pool);
printf("%d",iret);
return 0;
}

int numOfIds(char *pool)
{
	int m=0,count=0,i=0,size=0,temp=0;
	for(i=0;pool[i]!='\0';i++)
	{
		size++;
	}
	
	for(m=0;m<size;m++)
	{
	if(pool[m]==8)
	{
	count++;
	}
	}

if(count==0)
{
	return 0;
}
else
{
	temp=size/11;
	if(count==temp)
{
	return temp;
}
	else if(count<temp)
{
	return count;
}
	else if(count>temp)
{
	return temp;
}
	
}
return temp;
}
