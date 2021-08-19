#include <stdio.h>

typedef int number;

int main()
{
  number a;
  int b;

  a = 520;
  b = a + 1;
  printf("a = %d, b = %d\n", a, b); //a = 520, b = 521
  return 0;
}
