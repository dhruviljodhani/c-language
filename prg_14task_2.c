#include<stdio.h>
int main()
{
	int a,n;
	a=1;
	printf(" Enter n = ");
	scanf("%d",&n);
	do
	{
	printf("\n %d",a);
	a++;
	}
	while(a<=n);
	return 0;
}