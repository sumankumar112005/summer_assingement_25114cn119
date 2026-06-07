// a program to Recursive reverse number
#include <stdio.h>

int rem, reverse = 0;

int reverse_number(int Number)
{
  if (Number > 0)
   {
     rem = Number % 10;
     reverse = reverse * 10 + rem;
     reverse_number (Number /10);
   }
   return reverse;
}
int main()
{
  int number;

  printf("Please Enter any number to Reverse = ");
  scanf("%d", &number);

  reverse = reverse_number(number);

  printf("Reverse of entered number %d = %d\n", number, reverse);
}

