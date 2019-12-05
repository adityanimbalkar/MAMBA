#include<stdio.h>
int CarRent(int);
int main()
{
	int Km=0;
	printf("\nEnter running\n");
	scanf("%d",&Km);
	int iRet=0;
	iRet=CarRent(Km);
	printf("The rent is %d rs\n",iRet);
	return 0;
}

int CarRent(int km)
{
	if(km<=100)
	return km*25;
	else if(km>100)
	return km*15;
}
