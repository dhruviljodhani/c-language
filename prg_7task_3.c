#include<stdio.h>
int main()
{
	char value;
	printf("enter value = ");
	scanf("%c",&value);
	if(value>=65 && value<=90)
	{
		value=value+32;
		printf("%c",value);
	}
	else if(value>=97 && value<=122)
	{
		value=value-32;
		printf("%c",value); 
	}
	return 0;
}