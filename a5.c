#include<stdio.h>
int main()
{

 int arr[4];
 int i;
 for(i=0;i<=3;i++)
 {
 printf("\n Enter a value of arr[%d];",i);
 scanf("%d",&arr[i]);
 }
 for(i=0;i<=3;i++)
 {
  printf("\n arr[%d]=%d",i,arr[i]);
  }
return 0;
}

