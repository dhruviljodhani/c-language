#include<stdio.h>
int main()
{

    int a,b;

    for ( a = 1; a <= 10; a+=2)
    {
        for( b = 1; b <= a; b+=2)
        {
            printf("\t%d",a);
        }
            printf("\n");        
    }
    
}