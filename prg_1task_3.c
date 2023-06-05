#include<stdio.h>
int main()
{
/*	int p=8,r=5,n=3,z;
	z = (p*r*n)/100;
	printf("(p*r*n)/100=%d",p*r*n/100);*/



	float p,r,n,z;
	printf(" enter p = ");
	scanf("%f",&p);
	printf(" enter r = ");
	scanf("%f",&r);
	printf(" enter n = ");
	scanf("%f",&n);
	printf("(%f*%f*%f)/100=%f",p,r,n,100,(p*r*n)/100);
	return 0;
}