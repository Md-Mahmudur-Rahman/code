#include <stdio.h>
int main()
{
 int i,j;
 
 char ch;
 printf("enter operation(+,-,*,/,\%)\n");
 scanf("%c", &ch);
 while (ch != 'n')
 {
  switch (ch)
  {
  case '+':
  {
   printf("enter operands: \n");
   scanf("%d %d", &i, &j);
   printf("%d + %d = %d", i, j, i + j);
   break;
  }
  case '-':
  {
   printf("enter operands: \n");
   scanf("%d %d", &i, &j);
   printf("%d - %d = %d", i, j, i - j);
   break;
  }
  case '*':
  {
   printf("enter operands: \n");
   scanf("%d %d", &i, &j);
   printf("%d * %d = %d", i, j, i * j);
   break;
  }
  case '/':
  {
   printf("enter operands: \n");
   scanf("%d %d", &i, &j);
   printf("%d / %d = %d", i, j, i / j);
   break;
  }
  case '%':
  {
   printf("enter operands: \n");
   scanf("%d %d", &i, &j);
   printf("%d %c %d = %d", i, 37, j, i % j);
   break;
  }
  }
  printf("enter operation(+,-,*,/,\%)\n");
 scanf(" %c", &ch);
 }}