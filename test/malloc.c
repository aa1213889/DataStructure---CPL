#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  ptr = (int *)malloc(sizeof(int));

  *ptr = 520;
  printf("your number is:%d\n", *ptr); //输出520
  free(ptr);

  printf("your number is:%d\n", *ptr); //输出一个随机数
  return 0;
}