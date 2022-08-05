#include <stdio.h>
#include <math.h>
int main()
{
 printf("Enter the last number for the following series:\n1^2+2^2+3^2+....+n^2\nn = ");
 
 int a, n, c = 0;
 scanf("%d", &n);
 for (a = 1; a <= n; a++)
 {
  c = c + pow(a, 2);
 }
 printf("Sum = %d", c);
 return 0;
}