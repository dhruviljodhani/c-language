#include<stdio.h>
int maths,sci,eng,total;
float per;
void display()
{
	printf("maths\tsci\teng\ttotal\tper\n");
	printf("%d\t%d\t%d\t%d\t%.2f",maths,sci,eng,total,per);
}
void calc()
{ 
	total=maths+sci+eng;
	per=(float)total/3;
	display();
}
void setdata()
{
	printf("enter maths mark : ");
	scanf("%d",&maths);
	printf("enter sci mark : ");
	scanf("%d",&sci);
	printf("enter eng mark : ");
	scanf("%d",&eng);
	calc();
}
	int main()
	{
		setdata();
	}