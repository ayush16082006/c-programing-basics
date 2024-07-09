#include<stdio.h>
int main()
{
 int n,x=0,y=1,z;
 printf("enter the value of n:");
 scanf("%d",&n);
 printf("%d%d",x,y);
 for(int i=0;i<n-2;i++)
 {
     z=x+y;
     printf("%d",z);
     x=y;
     y=z;
 }
return 0;
}
