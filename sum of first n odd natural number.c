#include<stdio.h>
int main()
{
 int i=1,s=0,n;
 printf("yhe value of n is ");
 scanf("%d",&n);
 while(i<=2*n)
  {
  s=s+i;
  i=i+2;
  }
 printf("%d",s);
 return 0;

}
