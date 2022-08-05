/*Write a menu driven program which has the following options:
1.   Factorial of a number
2.   Prime or not
3.   Odd or even
4.   Exit
Once a menu item is selected the appropriate action should be taken and once this action is finished,
the menu should reappear. Unless the user selects the ‘Exit’ option the program should continue to run.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a, b, c;
  while (a != 4)
  {
    printf("Input your choice!\n1. Factorial of number\t2. Prime or not\n3. Odd or even\t4. Exit\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    {
      printf("Enter an integer");                                       //Name : Md.Mahmudur Rahman
      scanf("%d", &b);                                                  //Student id: 221-35-948
      for (c = 1; b > 1; b--)
      {
        c = c * b;
      }
      printf("Factorial value = %d", c);
      break;
    }
    case 2:
    {
      printf("Enter the integer number\n");
      scanf("%d", &c);
      for (b = 2; b < c; b++)
      {

        a = c % b;
        if (a == 0)
        {
          printf("It's not a prime number\n");
          break;
        }
      }
      if (c <= 1)
        printf("All the numbers, less than 2 are not prime numbers.\n");
      else if (a == 0)
        printf("");
      else
      {
        printf("It's a prime number\n");
      }
      break;
    }
    case 3:
    {
      printf("Enter an integer number = ");
      scanf("%d", &a);
      if (a % 2 == 0)
        printf("Even");
      else
        printf("Odd");
    }
    break;
    case 4:
      exit(0);
    default:
      printf("Invalid!");
      break;
    }
    printf("\n");
  }
}
