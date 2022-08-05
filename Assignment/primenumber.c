#include <stdio.h>
int main()
{
 int i, n, a = 0, x, k, c = 0;
 printf("Enter the integer number\n");
 scanf("%d", &n);
 for (i = 2; i < n; i++)
 {

  x = n % i;
  if (x == 0)
  {
   printf("It's not a prime number\n");
   break;
  }
 }
 if (n <= 1)
  printf("All the numbers, less than 2 are not prime numbers.\n");
 else if (x == 0)
  printf("");
 else
 {
  printf("It's a prime number\n");
 }
 for (i = 2; i <= n; i++)
 {
  for (k = 2; k <= i; k++)
  {
   if (i % k == 0)
   {
    break;
   }
  }
  if (i == k)
  {
   c = c + 1;
  }
 }
 printf("there are %d prime numbers upto %d", c, n);
 return 0;
}