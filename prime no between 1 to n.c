#include<stdio.h>
int main()
{int n,i;
for(n=1;n<=1000;n++)
{
for(i=2;i<=n/2;i++)
{
if(n%i==0)
break;
}
if(i==n/2+1)
printf("%d  ",n);
}
}
