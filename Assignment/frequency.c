#include <stdio.h>
int main()
{
 int arr[9] = {1, 2, 3, 1, 1, 2, 2, 2, 3}, n1 = 0, n2 = 0, n3 = 0, i, j;
 for (i = 0; i < 9; i++)
 {
  if (arr[i] == 1)
  {
   n1 = n1 + 1;
  }
  else if (arr[i] == 2)
  {
   n2 = n2 + 1;
  }
  else
   n3 = n3 + 1;
 }
 printf("1 occurs %d times\n", n1);
 printf("2 occurs %d times\n", n2);
 printf("3 occurs %d times\n", n3);
 return 0;
}