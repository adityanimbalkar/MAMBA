#include<stdio.h>
#include<string.h>
void Frequency(int);

int main()
{
	int iNo=0;
printf("Enter no\n");
scanf("%d",&iNo);
Frequency(iNo);
return 0;
}

void Frequency(int no)
{
	char str[6];
	int i=0,temp=0;
temp=no;
for(i=0;((i<6)&&(no>0));i++)
{
	str[i]=no%10;
	no=no/10;
}
int count=0,size=0;
size=strlen(str);
size--;
int j=0,k=0;
for(k=0;k<=size;k++)
{
for(j=0;j<=size;j++)
{
	if(str[k]==str[j])
	{
	count++;
	str[j]=-1;
	}
}
printf("\n%d--->%d\n",str[k],count);
count=0;
}

}
