#include<stdio.h>
int main()
{

    int a,b;

    for ( a = 2; a <= 10; a+=2)
    {
        for( b = 2; b <= a; b+=2)
        {
            printf("\t%d",a);
        }
            printf("\n");        
    }
    
}