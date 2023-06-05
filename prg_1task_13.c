#include<stdio.h>
int main()
{
/*	int a=12,b=15,c;
	c=(a+b)*(a+b);
	printf("(12+15)*(12+15)=%d",c);*/



	int a,b,c;
	c=(a+b)*(a+b);
	printf(" enter a = ");
	scanf("%d",&a);
	printf(" enter b = ");
	scanf("%d",&b);
	printf("(%d+%d)*(%d+%d)=%d",a,b,a,b,(a+b)*(a+b));
	return 0;
}