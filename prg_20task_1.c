#include<stdio.h>
int main()
{
	int a[5],i,PRODUCTNO[5],RATE[5],QTY[5],DISCOUNT[5],RATEAD[5],GST[5],BILLAMOUNT[5],PRICE[5],d,b,c;

	for(i=0;i<5;i++)
	
	{
		printf("Enter ProductNo [%d] ::",i+1);
		scanf("%d",&PRODUCTNO[i]);

		
		printf("Enter PRICE [%d]::",i+1);
		scanf("%d",&PRICE[i]);


		printf("Enter QTY [%d]::",i+1);
		scanf("%d",&QTY[i]);
	}


	for(i=0;i<5;i++)
	{
		RATE[i]=PRICE[i]*QTY[i];
		DISCOUNT[i]=RATE[i]*0.10;
		RATEAD[i]=RATE[i]-DISCOUNT[i];
		GST[i]=RATEAD[i]*0.18;
		BILLAMOUNT[i]=RATEAD[i]+GST[i];
	}
	printf("PRODUCTNAME \t PRICE \t QTY \t RATE\tDISCOUNT \tRATEAD \t GST \tBILLAMOUNT");

	for(i=0;i<5;i++)
	{
	printf("\n   %d \t\t %d \t  %d \t %d \t   %d \t \t %d \t\t%d \t%  d",PRODUCTNO[i],PRICE[i],QTY[i],RATE[i],DISCOUNT[i],RATEAD[i],GST[i],BILLAMOUNT[i]);
	}

	for(i=0;i<5;i++)
	   {
		   d=d+DISCOUNT[i];
	   }
	         printf("\n \t \t \t \t \t %d",a);
	
	for(i=0;i<5;i++)
        {
		      b=b+GST[i];
	    }
	           printf("\t %d",b);
	
	for(i=0;i<5;i++)
	     {
		        c=c+BILLAMOUNT[i];
         }
	               printf("\t %d",c);	
}