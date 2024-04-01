#include <stdio.h>

int main (void)
{
  int a = 999;
  int b = 999;
  int pal = 0;

  int largest_a = 0;
  int largest_b = 0;
  int largest_pal = 0;

  while (a >= 100)
  {
    b = 999;
    while (b >= 100)
    {
      pal = a * b;
      
      if (pal <= largest_pal)
        break;

      if (isPalindrome(pal) > 0) 
      {
        largest_pal = pal;
        largest_a = a;
        largest_b = b;
      }

      b--;
    }
    a--;
  }

  printf("Largest Palindrome: %d * %d = %d\n", largest_a, largest_b, largest_pal);
  
  FILE* f = fopen("102-result", "w");
  if (f != NULL)
  {
    fprintf(f, "%d", largest_pal);
    fclose(f);
    f = NULL;
  }

  return (0);
}

int isPalindrome (int number)
{
  int reversed = 0;
  int n = number;

  while (n != 0)
  {
    reversed = reversed * 10 + n % 10;
    n /= 10;
  }

  return (number == reversed);
}
