#include<stdio.h>
void main()
{
int n,f;
int fact(int);
printf("THE VALUE OF N IS:");
scanf("%d",&n);
f=fact(n);
printf("%d",f);
}
int fact(int n1)
{
if (n1==0)
return 1;
else
return n1*fact(n1-1);
}
