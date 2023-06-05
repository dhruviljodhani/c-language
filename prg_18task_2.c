 #include<stdio.h>
int main()
{
	int a[5],b[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter a[%d] :",i+1);
		scanf("%d",&a[i]);	
	}
	for(i=0;i<5;i++)
	{
		printf("enter b[%d] :",i+1);
		scanf("%d",&b[i]);
	}

printf("\n\t(a)\t\t(b)\t   total of a=b\n");
for(i=0;i<5;i++)
        {
			printf("  \n  \t%d\t       %d\t\t        %d",a[i],b[i],a[i]+b[i]);
		}
	printf("\n");

return 0;
} 