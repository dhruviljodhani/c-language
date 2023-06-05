#include<stdio.h>
int main()
{
	float bs,gs,da,hra;
	printf("enter basic salary : \n");
	scanf("%f",&bs);
	if(bs > 5000)
	{
		hra = bs * 10 / 100; 
		da = bs * 90 / 100;
	}
	else
	{
		hra = 600;
		da = bs * 95 / 100;
	}
		gs = bs + da + hra;
	printf("gross salary is rs %f",gs);
	return 0;
} 