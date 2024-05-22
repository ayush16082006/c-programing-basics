#include<stdio.h>
int main()
{
int i,n;
printf("enter the value of n\n");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
if(n%i==0)
break;
if(i==n/2+1)
printf("prime");
else
printf("not prime");
return 0;
}
