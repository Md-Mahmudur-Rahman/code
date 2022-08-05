/*  Write a C program to calculate the sum of the elements of a 2D array.
 You will take the 2D array input from user.
 */
#include <stdio.h>
int main()
{
 int i, n1, n2, j, sum = 0;
 printf("Enter how many row and column");
 scanf("%d %d", &n1, &n2);
 int arr[n1][n2];
 for (i = 0; i < n1; i++)
 {
  for (j = 0; j < n2; j++)
  {
   printf("your value = ");
   scanf("%d", &arr[i][j]);                 //Name: Md. Mahmudur Rahman
   sum = sum + arr[i][j];                   //Student Id: 221-35-948
  }
 }
 for (i = 0; i < n1; i++)
 {
  for (j = 0; j < n2; j++)
  {
   printf("%d\t", arr[i][j]);
  }
  printf("\n");
 }
 printf("sum = %d\n", sum);
 return 0;
}
