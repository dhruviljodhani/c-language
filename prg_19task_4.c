#include<stdio.h>
int main()
{
	  int a[10],i,sum=0;
	  for(i=0;i<10;i++)
	  {
		printf("enter a[%d]",i+1);
		scanf("%d",&a[i]);
	  }
	  for(i=0;i<10;i++)
	  {
	  if(a[i] %2 == 0)
      {	
	  sum+=a[i];
	  }
	  }
printf("the sum of even numbers:%d\n",sum);
	return 0;
}