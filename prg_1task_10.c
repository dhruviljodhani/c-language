#include<stdio.h>
int main()
{
/*	float v=50,s=30,m=15,t;
	t=((v+s)+(1-m)*1);
	printf("((v+s)+(1-m)*1)=%f",t);*/


	float v,s,m,t;
	t=((v+s)+(1-m)*1);
	printf("enter v = ");
	scanf("%f",&v);
	printf("enter s = ");
	scanf("%f",&s);
	printf("enter m = ");
	scanf("%f",&m);
	printf("((%f+%f)+(1-%f)*1)=%f",v,s,m,((v+s)+(1-m)*1));
	return 0;
}