#include<stdio.h>
int main()
{
/*	float k=8,a=5,x;
	x=(k-4)*(a*4)/100;
	printf("(%f-4)*(%f*4)/100=%f",k,a,x=(k-4)*(a*4)/100);*/


	float k,a,x;
	x=(k-4)*(a*4)/100;
	printf(" enter k = ");
	scanf("%f",&k);
	printf(" enter a = ");
	scanf("%f",&a);
	printf("(%f-4)*(%f*4)/100 = %f",k,a,x=(k-4)*(a*4)/100);
	return 0;
}