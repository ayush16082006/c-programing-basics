#include<stdio.h>
#include<stdbool.h>
int main()
{
int n,temp;
printf("ENTER THE SIZE OF array:");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("\nELEMENTS OF ARRAY BEFORE SORTING:");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);

for(int i=0;i<n-1;i++)
  {
    bool flag =true;
for(int j=0;j<n-1;j++)
  {
if(arr[j]>arr[j+1])
     { temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
       flag=false;

     }
  }
if(flag==true)
break;
  }
printf("\n");
printf("ELEMENTS OF ARRAY AFTER SHORTING:");
for(int j=0;j<n;j++)
printf("%d ",arr[j]);
return 0;
}
