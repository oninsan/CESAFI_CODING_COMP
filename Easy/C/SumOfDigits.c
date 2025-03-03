#include <stdio.h>
#include <stdlib.h>

int sum_of_digits(int n)
{
  n = abs(n);
  int sum = 0;
  while (n > 0)
  {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("%d\n", sum_of_digits(num));
  return 0;
}
