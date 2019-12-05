#include<stdio.h>
int main()
{
	int long iYear=0;
printf("Enter year\n");
scanf("%d",&iYear);

if(iYear%4==0)
	{
	printf("\n\n\nLEAP YEAR");
	}
else
	{
	printf("\n\n\nNOT A LEAP YEAR");
	}
return 0;
}
