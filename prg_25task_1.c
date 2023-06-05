#include<stdio.h>
int dh(int n)
{
   int sum=0;
   while (n!=0)
   {
       sum = sum*10 + n%10;
       n /= 10;
   }
   return sum;
}
int main()
{
   int number, reverse;
   printf("Enter a number: ");
   scanf("%d", &number);
   reverse = dh(number);
   printf("The reverse of %d is: %d", number, reverse);
   return 0;
}