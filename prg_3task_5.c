#include<stdio.h> 
int main()
{
/*	int a=200,b=500,c=50;
	printf(" enter 1st number = ");
	scanf("%d",&a);
	printf(" enter 2nd number = ");
	scanf("%d",&b);
	printf(" enter 3rd number = ");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("\na (%d) is largest number",a);
	}
	else
	{
	if(b>c)
	{
		printf("\nb (%d) is largest number",b);
	}
	else
	{
		printf("\nc (%d) is largest number",c);
	}
	}
	return 0;*/





	int a,b,c,d,e;
	printf(" enter 1st number = ");
	scanf("%d",&a);
	printf(" enter 2nd number = ");
	scanf("%d",&b);
	printf(" enter 3rd number = ");
	scanf("%d",&c);
	printf(" enter 4th number = ");
	scanf("%d",&d);
	printf(" enter 5th number = ");
	scanf("%d",&e);
	if(a>b && a>c && a>d && a>e)
	{
		printf("\na (%d) is largest number",a);
	}
	else if(b>c && b>d && b>e) 
	{
		printf("\nb (%d) is largest number",b);
	}
	else if(c>d && c>e)
	{
		printf("\nc (%d) is largest number",c);
	}
	else if(d>e)
	{
		printf("\nd (%d) is largest number",d);
	}
	else
	{
		printf("\ne (%d) is largest number",e);
	}
	return 0;
}