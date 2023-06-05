 #include<stdio.h>
int main()
{
	int a[5],i,unit[5],total[5];
	for(i=0;i<5;i++)
	{
	printf("\n enter your electricity unit [%d] = ",i+1);                                               
	scanf("%d",&unit[i]);
	}
	for(i=0;i<5;i++)
	{
	if (unit[i]<=100)
	{
		total[i] = (unit[i]*0.6) + 50;
	}
	else if (unit[i]>101 && unit[i]<=300)
	{
		total[i] = (100*0.60) + ((unit[i]-100)*0.80) + 50;
	}
	else 
	{
		total[i] = (100*0.60) + (200*0.80) + ((unit[i]-300)*0.90) + 50;
	}
	if(total[i]>=301) 
	{
		total[i]=total[i]*1.15;
	}
		printf("\n your total bill is = %d",total[i]);
	} 
}   