#include<stdio.h>
int main()
{
/*	float p=100,r=50,n=20,a;
	a=p*(1+(r/100)/n)-p;
	printf("%f*(1+(%f/100)/%f)-%f = %f",p,r,n,p,p*(1+(r/100)/n)-p);*/



	float p,r,n,a;
	a=p*(1+(r/100)/n)-p;
	printf(" enter = ");
	scanf("%f",&p);
	printf(" enter = ");
	scanf("%f",&r);
	printf(" enter = ");
	scanf("%f",&n);
	printf("%f*(1+(%f/100)/%f)-%f = %f",p,r,n,p,p*(1+(r/100)/n)-p);
	return 0;
}