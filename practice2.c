#include <stdio.h>
int main()
{
    int i, j, a, value;

    for(i=1; i<=5; i++)
    {
        a = 5-1; 
        value = i;  
        for(j=1; j<=i; j++)
        {
            printf("%-3d", value);

            value += a; 
            a--;        
        }

        printf("\n");
    }

    return 0;
}
