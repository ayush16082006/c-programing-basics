#include<stdio.h>
int main (){
int x[7],i,t;
printf("enter the numbers\n");
for(i=0;i<=6;i++)
scanf("%d",&x[i]);
t=x[0];
for(i=1;i<=6;i++)
{
if(x[i]>t)
t=x[i];
}
printf("the greatest number is:");
printf("%d",t);
return 0;
}

