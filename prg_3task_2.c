#include<stdio.h>
int main()
{
	int a;
	printf(" enter a number to check = ");
	scanf("%d",&a);
	if((a%3==0)&&(a%5==0))
	{
		printf(" numer is devisible 3 and 5 ");
	}
	else
	{
		printf(" numer is not devisible 3 and 5 ");
	} 
}