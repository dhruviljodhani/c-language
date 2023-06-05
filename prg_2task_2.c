#include<stdio.h>
int main()
{
	int a,b;
	printf(" enter a = ");
	scanf("%d",&a);
	printf(" enter b = ");
	scanf("%d",&b);
	if(a<b)
	{
		printf("\n a=(%d) is less than b=(%d)",a,b);
	}
	else
	{
		printf("\n b=(%d) is less than a=(%d)",b,a);
	}
}


