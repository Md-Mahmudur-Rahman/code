/* A company insures its drivers in the following cases:
i. If the driver is married.
ii. If the driver is unmarried, male & above 30 years of age
iii. If the driver is unmarried, female and above 25 years of age.
In all other cases, the driver is not insured. The marital status, sex, and
age are the input which will be taken from user.
Write a C program to determine whether the driver is to be insured or not.*/
#include <stdio.h>
int main()
{
 int marital_status, sex, age;
 printf("Input Choice!\nMarital Status :\n1. Married\t2. Unmarried\n");
 scanf("%d", &marital_status);
 if (marital_status == 1)
  printf("Insured!");
 else if (marital_status == 2)
 {
  printf("Input Choice!\nSex :\n1. Male\t2. Female\n");
  scanf("%d", &sex);
  if (sex == 1)
  {
   printf("Enter your age sir : ");                         // Name : Md. Mahmudur Rahman
   scanf("%d", &age);                                       // Student Id: 221-35-948
   if (age > 30)
    printf("Insured!");
   else
    printf("Not insured!");
  }
  else if (sex == 2)
  {
   printf("Enter your age madam : ");
   scanf("%d", &age);
   if (age > 25)
    printf("Insured!");
   else
    printf("Not insured!");
  }
  else
   printf("Invalid Input!");
 }
 else
  printf("Invalid Input!");

 return 0;
}
