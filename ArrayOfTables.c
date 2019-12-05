#include<Stdio.h>
void ArrayOfTable(int[],int,int);
int main()
{
	int table=0,i=0,arr[10],size=0;
printf("Enter size of array\n");
scanf("%d",&size);
printf("\nEnter elements\n");
for(i=0;i<size;i++)
{
	scanf("%d",&arr[i]);
}
printf("Enter the no whose table to be printed\n");
scanf("%d",&table);
ArrayOfTable(arr,table,size);
return 0;
}

void ArrayOfTable(int arr[],int table,int size)
{
	int *p=arr;
	int i=0,j=0;
for(i=1;p<=&(arr[size-1]);i++)
{
	*p=table*i;
	 printf("%d\t",*p);
	 p++;
}
}
