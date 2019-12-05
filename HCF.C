#include<stdio.h>
int HCF(int,int);
int main()
{
	int iRet=0,No1=0,No2=0;
printf("Enter two nos to find HCF\n");
scanf("%d%d",&No1,&No2);
iRet=HCF(No1,No2);

printf("\n\n\n\n\n HCF: %d",iRet);
return 0;
}

int HCF(int No1,int No2)
{
	int i=0,j=0,k=0,l=0,size1=0,size2=0;
	int Arr[15],Brr[15];
	int *ptr=Arr;
	int *qtr=Brr;

	for(i=1;i<=No1;i++)       //Array ONE
	{
	if((No1%i)==0)
		{
		 size1++;
		*ptr=i;
		 printf("%d\t",*ptr);
		 ptr++;
		 
		}
	}
	printf("\n");

	for(j=1;j<=No2;j++)        //Array TWO
	{
	if((No2%j)==0)
		{
		 size2++;
		*qtr=j;
		 printf("%d\t",*qtr);
		 qtr++;
		 
		}
	}
	printf("\n");




int m=0,n=0,hcf=0;
for(m=0;m<size1;m++)
	{
	for(n=0;n<size2;n++)
		{
		 if(Arr[m]==Brr[n])
			{
			 hcf=Brr[n];
			
			}
		}
	}
return hcf;
}
