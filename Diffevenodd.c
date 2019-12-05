#include<stdio.h>
int Difference(int);


int main()
{
	int long long No=0;
	int iRet=0;

	printf("Enter no\n");
	scanf("%d",&No);

	iRet=Difference(No);

	printf("The difference is %d",iRet);

return 0;

}

int Difference(int no)
{

	int i=0,sumodd=0,sumeven=0;
	int arr[100];


	for(no;no!=0;no=no/10)
  	{
		arr[i]=no%10;
		if(arr[i]%2==1)
			{
			sumodd=sumodd+arr[i];
			}
		else
			{
			sumeven=sumeven+arr[i];
			}
		i++;
  	}


return sumodd-sumeven;
}
