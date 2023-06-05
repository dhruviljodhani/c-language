#include<stdio.h>
int main()
{
   int studentname,rollno,maths,computer,physics,chemistry,biology;
   float total,percentage;
    
   printf("\n student name :");
   
  
   printf("\n rollno:");
   scanf("%d",&rollno);

   printf("\nsubject");

   printf("\n \t maths:");
   scanf("%d",&maths);
   
   printf("\n \t computer:");
   scanf("%d",&computer);

   printf("\n \t physics:");
   scanf("%d",&physics);
   
   printf("\n \t chemistry:");
   scanf("%d",&chemistry);

   printf("\n \t biology:");
   scanf("%d",&biology);
   
   total=maths+computer+physics+chemistry+biology;
   printf("\ntotal is:(%f)",total);

   percentage=total/500*100;
   printf("\npercentage is :(%f)",percentage);

   if(percentage>=75)
      {
          printf("\ngrade A");
      }
      else if(percentage>=60 && percentage<=75)
         {
            printf("\n grade B");
         }
         else if(percentage>=45 && percentage<=60)
           {
              printf("\n grade C");
           }
           else if(percentage>=35 && percentage<=45)
             {
                printf("\n grade D");
             }
                else
                 {
                    printf("\n fail");
                 }
}
