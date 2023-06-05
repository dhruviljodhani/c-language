#include<stdio.h>
int main()
{
/*	float a=24,b=58,c=82,s;
	s=((4*a+c)-2*a*b)/100;
	printf("((4*%f+%f)-2*%f*%f)/100=%f",a,c,a,b,((4*a+c)-2*a*b)/100);*/


	float a,b,c,s;
	s=((4*a+c)-2*a*b)/100;
	printf(" enter a = ");
	scanf("%f",&a);
	printf(" enter b = ");
	scanf("%f",&b);
	printf(" enter c = ");
	scanf("%f",&c);
	printf("((4*%f+%f)-2*%f*%f)/100 = %f",a,c,a,b,((4*a+c)-2*a*b)/100);
	return 0;
}