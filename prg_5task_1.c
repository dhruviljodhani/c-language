 #include<stdio.h>
int main()
{
	int PRODUCTNAME,PRICE,QTY,RATE,DISCOUNT,RATEAD,GST,BILLAMOUNT;
	printf("PAVAN TRANSPORT COMPANY ");
	printf("\nENTER PRODUCT NAME : ");
	scanf("%d",&PRODUCTNAME);
	printf("ENTER PRICE = ");
	scanf("%d",&PRICE);
	printf("ENTER QTY = "); 
	scanf("%d",&QTY);
	RATE=PRICE*QTY;
	DISCOUNT=RATE*0.10; 
	RATEAD=RATE-DISCOUNT;
	GST=RATEAD*0.18;
	BILLAMOUNT=RATEAD+GST; 
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*PAVAN TRANSPORT COMPANY*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n                   PRODUCTNAME \tPRICE\tQTY\tRATE\tDISCOUNT(10%)\tRATEAD\tGST(18%)\tBILLAMOUNT");
	printf("\n                        %d   \t %d\t %d\t%d\t   %d \t\t %d\t%d    \t  %  d",PRODUCTNAME,PRICE,QTY,RATE,DISCOUNT,RATEAD,GST,BILLAMOUNT);
	for(           )
	return 0;
}

	

	
 