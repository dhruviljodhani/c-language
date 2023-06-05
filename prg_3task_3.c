#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" enter 1st number ");
	scanf("%d",&a);
	printf(" enter 2nd number ");
	scanf("%d",&b);
	c=a*b;
	printf("%d",c);
	if(c%21==0)
	{
		printf("\n number is divisible 3 and 7 ");
	}
	else
	{
		printf("\n number is not divisible 3 and 7 ");
	}

	
}