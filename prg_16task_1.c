#include<stdio.h>
int main()
{
    int a=5,c=5,b;
    z:
    if(a>=1)
  {
    b=1;
    x:
    if(a>=b)
    { 
        printf(" *");
        b++;
        goto x;
    }
    printf("\n");
    c=5;
    y:
    if(c>=a)
    {
        printf(" ");
        c--;
        goto y;
    }
    a--;
    goto z;
  }  
  return 0;
}
