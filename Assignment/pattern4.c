#include <stdio.h>
int main()
{
 int i, j, k;
 for (i = 1; i <= 5; i++)
 {
  for (j = 5; j >i; j--)
   printf("  ");
  for (j = 1; j <= 2 * i - 1; j++)
   printf("* ");
  printf("\n");
 }
}