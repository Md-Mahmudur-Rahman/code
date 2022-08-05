#include <stdio.h>
int main()
{
 printf("Enter how many times : ");
 int a, b, c = 0, d = 1, n;
 char ch;
 scanf("%d", &n);
 for (a = 1; a <= n; a++)
 {
  printf("Number %d = ",a);
  scanf("%d",&b);
  scanf("%c",&ch);
  
  if (b < 0)
  {
   break;
  }
  if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
  {
   continue;
  }
  c = c + b;

  d = d * b;
 }
 printf("Sum=%d\n", c);
 printf("Multiplication=%d\n", d);

 return 0;
}