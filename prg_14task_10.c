#include<stdio.h>
int main()
{
    int i;
    i=1;
    do
   {
     printf("\n %c-%c", i+64,i+64+32);
     i++;
   }
    while(i<=26);
    return 0;
}