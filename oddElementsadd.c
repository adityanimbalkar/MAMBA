#include<stdio.h>
void AddnOdds(int[],int);
int main()
{
	int arr[10],i=0,size=0;
printf("Enter size\n");
scanf("%d",&size);
printf("Enter elements\n");
for(i=0;i<size;i++)
{
	scanf("%d",&arr[i]);
}
AddnOdds(arr,size);
return 0;
}

void AddnOdds(int arr[],int size)
{
	int temp=0,*p=arr,i=0,j=0;
even:
if(*p%2==0)
{	
	printf("%d\t",*p);
	p++;
}
if(*p%2!=0)
{
	temp=*p;
	p++;
	
	for(*p;(p<(&arr+1))&&((*p%2)==1);p++)
    {
	temp=*p+temp;
	}
	printf("%d\t",temp);
	if(*p%2==0)
	goto even;
}

}
