#include<stdio.h>
int LCM(int,int);

int main()
{
	int iRet=0,No1=0,No2=0;
printf("Enter numbers\n");
scanf("%d%d",&No1,&No2);

iRet=LCM(No1,No2);
printf("\n\n\nLCM: %d",iRet);
return 0;
}

int LCM(int no1,int no2)
{
	int lcm=0,m=0,n=0,i=0,j=0;
	int arr[30],brr[30];
	
	for(i=1;i<=no2;i++)
	{
	arr[i-1]=i*no1;	
	printf("%d\t",arr[i-1]);
	}

printf("\n\n");

	for(j=1;j<=no1;j++)
	{
	brr[j-1]=j*no2;
	printf("%d\t",brr[j-1]);
	}



	 for(m=no2-1;m>=0;m--)
	 {
		for(n=no1-1;n>=0;n--)
		{
			if(arr[m]==brr[n])
			{
			lcm=arr[m];
			}
		}
	 }

return lcm;
}
