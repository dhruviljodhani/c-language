#include<stdio.h>
int main()
{
	int a[5],b[5];
	int i,v;
	for(i=0;i<5;i++)
	{		
			printf("enter a[%d] : ",i+1);
			scanf("%d",&a[i]);
		
	}
	for(v=0;v<5;v++)
	{
		
			printf("\tenter b[%d] : ",v+1);
			scanf("%d",&b[v]);
		
	}
	
	printf("\n-----------array-----------\n");
	for(i=0;i<5;i++)
	{
		printf("\n a [%d] : %d",i+1,a[i]);
	}
	for(v=0;v<5;v++)
	{
		printf("\n b [%d] : %d",v+1,b[v]);
	}
}