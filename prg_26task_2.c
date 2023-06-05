#include<stdio.h>
int maths,science,english,total,grade;
float percentage;
void display(int p;int q;int r;int s;int t;int o)
{
     
		printf("maths\tscience\tenglish\ttotal\tpercentage\tgrade\n");
		printf("%d\t%d\t%d\t%d\t%.2f",p,q,r,s,t,o);
	
if(maths<33 || science<33 || english<33 )
    {
	printf("\t       fail");
    }
else if(percentage>=75)
	{
   	   printf("\ta");
 	}
 else if(percentage>=60 && percentage<=75)
     {
        printf("\tb ");
     }
 else if (percentage>=45 && percentage<=60)
     {  
        printf("\tc ");
     }
 else if (percentage>=35 && percentage<=45)
    { 
       printf("\td ");
    }
}
void calc(int a,int b,int c)
{
	int total;
	float percentage;
	total=maths+science+english;
	percentage=(float)total/3;
	display(a,b,c,total,percentage)
	
}
void setdata()
{
	int maths,science,english;
	printf("enter maths marks::");
	scanf("%d",&maths);
	
	printf("enter science marks::");
	scanf("%d",&science);
	
	printf("enter english marks::");
	scanf("%d",&english);
	calc(maths,science,english
}
int main()
{
	setdata();
}