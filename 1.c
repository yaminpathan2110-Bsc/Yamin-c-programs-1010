#include <stdio.h>
int main()
{
  int N, count=0,num=2;
  printf("Enter the value of N:--");
  scanf("  %d ",&N);
  printf("First %d even numbers: \n  ",N);
  
  while(count<N)
  {
   printf(" %d  \n",num);
   num+=2;
   count++;
  }
  printf("  \n  ");
return 0;
}
