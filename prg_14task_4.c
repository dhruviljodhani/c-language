#include<stdio.h>
int main()
{
	int i;
	i=1;
     	while(i<=10)
	{
	printf("\n %d",i);
	i++;
	}
	i=11;
	while(i<=20)
	{
	printf("\n \t%d",i);
	i++;
	}
	i=21;
	while(i<=30)
	{
	printf("\n \t \t %d",i);
	i++;
	}
	i=31;
	while(i<=40)
	{
	printf("\n \t \t \t %d",i);
	i++;
	}
	i=41;
	while(i<=50)
	{
	printf("\n \t \t \t \t %d",i);
	i++;
	}
	printf("\n \n              ");
	
	i=50;
	while(i>=41)
	{
	printf("\n \t \t \t \t %d",i);
	i--;
	}
	i=40;
	while(i>=31)
	{
	printf("\n \t \t \t %d",i);
	i--;
	}
	i=30;
	while(i>=21)
	{
	printf("\n \t \t %d",i);
	i--;
	}
	i=20;
	while(i>=11)
	{
	printf("\n \t %d",i);
	i--;
	}
	i=10;
	while(i>=1)
	{
	printf("\n %d",i);
	i--;
	}
	return 0;
}