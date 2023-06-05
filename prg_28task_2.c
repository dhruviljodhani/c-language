#include<stdio.h>
int dis(int a[ ])
{
    int n;
    for(int i=0;i<n;i++)
{
if(i==0)
    printf("%d \n",a[i]);
else
printf("%d\t %d\n",a[i],a[i]+a[i-1]);
}
}
int main()
{
int dis[],i,n;
for(i=0;i<n;i++)
{
   printf("entar a[%d]:",i);
   scanf("%d",&dis[i]);
}
dis(dh);
}