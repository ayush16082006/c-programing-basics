#include<stdio.h>
int main()
{
 int m,n,i,j;
 printf("ENTER THE NUMBER OF ROWS AND COLUMNS:");
 scanf("%d %d" ,&i,&j);
 int arr[i][j];
 for(int m=0;m<i;m++)
 {
   for(int n=0;n<j;n++)
        scanf("%d",&arr[n][m]);
}
 int key,flag=0;
 printf("enter key:");
 scanf("%d",&key);

 int x=0,y=n-1;
while(x<=m&&y>=0)
{

if(arr[x][y]==key)
    {
        flag=1;
        break;
    }

 if(key>arr[x][y])
    y--;
 else
    x++;
}
if(flag)
    printf("found");
else
    printf("not found");
    return 0;
}
