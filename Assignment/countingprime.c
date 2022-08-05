#include<stdio.h>
int main()
{
 int i,j,n,c=0;
 scanf("%d",&n);
 for(i=2;i<=n;i++)
 {
  for(j=2;j<=i;j++)
  {
   if(i%j==0)
   {
    break;
   }
  }
  if(i==j)
   {
   c=c+1;
   }
 }
 printf("there are %d prime numbers upto %d",c,n);
 return 0;
}