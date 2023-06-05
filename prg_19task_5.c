#include<stdio.h>
int main()
{
	int a[10]
	int i,total=0;
	for(i=0;i<10;i++)
	{
		printf("enter a[%d] :",i);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<10;i++)
	{
		printf("\n %d",a[i]);
	}
	printf("\ntotal");
	for(i=0;i<10;i++)
	{
		total=total+a[i];
	}
	printf("\n:%d\n",total);
return 0;
} 