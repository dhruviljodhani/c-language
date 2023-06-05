#include<stdio.h>
void dh()
{
		int maths,science,english,total,grade;
		float percentage;

		printf("enter maths marks::");
	    scanf("%d",&maths);
	
	    printf("enter science marks::");
	    scanf("%d",&science);
	
	    printf("enter english marks::");
	    scanf("%d",&english);

		printf("-------------------------result----------------------------\n");
	    total=maths+science+english;
	    percentage=(float)total/3;
     
		printf("maths\tscience\tenglish\ttotal\tpercentage\tgrade\n");
		printf("%d\t%d\t%d\t%d\t%.2f",maths,science,english,total,percentage);

if(maths<33 || science<33 || english<33 )
    {
	printf("\t       fail");
    }
else if(percentage>=75)
	{
   	   printf("\t      a");
 	}
 else if(percentage>=60 && percentage<=75)
     {
        printf("\t     b ");
     }
 else if (percentage>=45 && percentage<=60)
     {
        printf("\t     c ");
     }
 else if (percentage>=35 && percentage<=45)
    { 
       printf("\t      d ");
    }

}
 int main()
{ 
dh();
			printf("\n-----------------------------------------------------------");

}
