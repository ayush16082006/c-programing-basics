#include<stdio.h>
void main()
{
int a,b,c=0;
printf("enter the number:");
scanf("%d",&a);
while(a|=0)
{
  b=a%10;
  a=a/10;
  c=c+b;
}
 printf("%d",c);


}
