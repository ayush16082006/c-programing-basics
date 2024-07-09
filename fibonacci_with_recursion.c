#include<stdio.h>
void fibo(int s,int f,int n);
int main ()
{
int n;
printf("enter a number");
scanf("%d",&n);
int f=0;
int s=1;
printf("%d",f);
fibo(f,s,n-2);
return 0;



}
void fibo(int s,int f,int n)
{
if(n>=0)
{int next = f+s;
printf("%d",next);

 fibo(next,s,n-1);
}
}
