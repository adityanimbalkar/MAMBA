#include<iostream>
using namespace std;

int SumOfN(int);

int main()
{
	int No=0;
	int iRet=0;
cout<<"\n\nEnter no:\n";
cin>>No;

iRet=SumOfN(No);

cout<<"\n"<<"SUM:"<<iRet;

return 0;
}


int SumOfN(int No)
{
	int iSum=0;

	if(No==1)
	{
	return No;
	}

	iSum=No+SumOfN(No-1);
	return iSum;
}
