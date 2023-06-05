#include<stdio.h>
int main()
{
	char value;
	printf("enter value = ");
	scanf("%c",&value);
	if("%c",value=='a'||value=='e'||value=='i'||value=='o'||value=='u')
	{
		printf(" (%c - %d) chose number is vowel",value,value);
	}
	else
	{
		printf(" (%c - %d) chose number is consonant",value,value);
	}
	return 0;
}
	