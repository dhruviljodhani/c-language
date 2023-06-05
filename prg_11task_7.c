#include<stdio.h>
int main()
{

    int a,b,c=1;

    for ( a = 1; a <= 5; a++)
    {

        for ( b = 1; b <= 5; b++)
        {
            printf("\t%d",c);
            c+=1;
        }
        printf("\n");
    }

}