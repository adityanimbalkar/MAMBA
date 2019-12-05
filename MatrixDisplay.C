#include<stdio.h>
int main()
{	
	int i=0,j=0,row=0,column=0;
	int arr[13][13];

	printf("Enter size for matrix ie.rows and columns\n");
	scanf("%d%d",&row,&column);

	printf("Enter elements\n");


	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
		scanf("%d",&arr[i][j]);
		}		
	}


	
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			if(i==j)
			{
				printf("%d\t",arr[i][j]);
			}		
		}
	printf("\n");
	}

	return 0;
}
