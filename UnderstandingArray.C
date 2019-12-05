#include<stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
printf("%d %d %d %d %d %d %d",arr,arr[0],&arr,(&arr[8]),&(arr[8]),&arr+1,arr+1);
return 0;
}
