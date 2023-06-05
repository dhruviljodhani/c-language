#include<stdio.h>
int main()
{
/*	int a=50,b=70,c=90,d=110,e;
	e= (a+b)*(c+d);
	printf("(a+b)*(c+d)=%d",(a+b)*(c+d));*/



	int a,b,c,d,e;
	e = (a+b)*(c+d);
	printf(" enter a = ");
	scanf("%d",&a);
	printf(" enter b = ");
	scanf("%d",&b);
	printf(" enter c = ");
	scanf("%d",&c);
	printf(" enter d = ");
	scanf("%d",&d);
	printf("(%d+%d)*(%d+%d)=%d",a,b,c,d,e=(a+b)*(c+d));
	return 0;
}