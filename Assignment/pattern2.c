#include<stdio.h>
int main()
{
 int k,i,j,a=0;
 for(i=1; i<=4; i++)
 {k=i;
  for(j=1; j<=i;j++)
  {
   
   printf("%d",k);
   printf(" ");
   k++;
  }
  printf("\n");
 }
 return 0;
}