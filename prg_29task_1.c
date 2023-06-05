#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    
    printf("Enter the value of a :- ");
    scanf("%d", &a);
    printf("Enter the value of b :- ");
    scanf("%d", &b);
    
    p = &a;
    q = &b;
    
    *p = *p + *q;
    *q = *p - *q;
    *p = *p - *q;   
    
    printf("after swapping\n");
    printf("value of a=%d\t%u\n",a,&b);
    printf("value of b=%d\t%u\n",b,&a);   
    
    return 0;
}