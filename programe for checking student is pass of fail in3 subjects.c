#include<stdio.h>
int main()
{
int m1,m2,m3;
printf("enter the marks of three subjects");
scanf("%d%d%d",&m1,&m2,&m3);
if(m1>50)
{
  if(m2>50)
  {
  if(m3>50)
  printf ("pass");
  else
  printf("compartment1");
  }
  else
  {
   if(m3>50)
   printf("compartment2");
   else
   printf("fai1");
   }
}
  else
  {
   if(m2>50)
   {
   if(m3>50)
   printf("compartment3");
   }
   else
   printf("fail2");
   }

return 0;
}
