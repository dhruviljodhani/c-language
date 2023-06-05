#include<stdio.h>
int main()
{
	float price,qty,amount;
	printf("enter your price : ");
	scanf("%f",&price);
	printf("enter your qty : ");
	scanf("%f",qty);
	/*price=price*qty;*/
	if (price<=1000)
	{ 
		amount=(price-0.5)*0.9;
	}
	else if (price>1001 && price<=5000)
	{
		amount=(1000-0.10)*0.12+(price-1000);
	}
	else 
	{
		amount=(5000-0.15)*0.28+(price-5000);
	}
	if (amount>=5000)
	{
		amount=amount-0.15*0.28;
	}
		/*amount=amount-discount;*/
		printf("your total amount = %f",amount);
		return 0;
}