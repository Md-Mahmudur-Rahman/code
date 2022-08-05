/*Write a C program to get the following pattern.
1
2 3
4 5 6
7 8 9 10
*/
#include <stdio.h>
int main()
{
 int i, j, k = 0;
 for (i = 1; i <= 4; i++)         // Name: Md.Mahmudur Rahman
 {
  for (j = 1; j <= i; j++)        // Student Id: 221-35-948
  {
   k = k + 1;
   printf("%d ", k);
  }
  printf("\n");
 }
 return 0;
}
