#include<stdio.h>
int main(){
int i=1,s=1,n;
printf("the value of n is");
scanf("%d",&n);
while(i<=n)
{
s=s*i;
++i;
}
printf("%d",s);
return 0;
}
