#include<stdio.h>
int main()
{
 int arr[3];
 int i;
  for(i=0;i<=2;i++)
  {
  printf("\n Enter value of arr[%d]: ");
  scanf("%d",&arr[i]);
  }
  
  for(i=0;i<=2;i++)
  {
    printf("\n arr[%d]=%d",i,arr[i]);
  
  }
return 0;
}

