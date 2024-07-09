#include<stdio.h>
#include<limits.h>

int main()
{ int n;
 printf("ENTER THE SIZE OF ARRAY:");
 scanf("%d",&n);
 int arr[n];
 printf("\nEMTER THE ELEMENTS OF ARRAY:");
 for(int i=0;i<n;i++)
 scanf("%d",&arr[i]);
 printf("ELEMENTS OF ARRAY BEFORE SHORTING:");
  for(int i=0;i<n;i++)
  printf("%d ",arr[i]);


    for(int i=0;i<n-1;i++)
{
     int min =INT_MAX;
   int minidx =-1;
   for(int j=i;j<=n-1;j++)
   {
     if(min>arr[j])
      {
       min=arr[j];
       minidx=j;
       }
   }
int temp=arr[minidx];
arr[minidx]=arr[i];
arr[i]=temp;
}
 printf("\nELEMENTS OF ARRAY AFTER SORTING:");
 for(int i=0;i<n;i++)
 printf("%d ",arr[i]);
 return 0;
}
