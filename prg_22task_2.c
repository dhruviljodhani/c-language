#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t enter b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n\t ---------matrix a---------------------matrix b---------------------total-----------------\n\n");

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);
		}
			printf("\t\t ");
	
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);
		}
			printf("\t");

		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]+b[i][j]);
		}
		     printf("\n");
	}
}
		