#include <stdio.h>

void getArr(int a[10])
{
  int i;
  a[5] = 520;
  printf("在getArr函数中打印一次...\n");
  for (i = 0; i < 10; i++)
  {
    printf("a[%d] = %d\n", i, a[i]);
  }
}
int main()
{
  int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  getArr(a);
  printf("在main函数中在打印一次...\n");
  int i;
  for (i = 0; i < 10; i++)
  {
    printf("a[%d] = %d\n", i, a[i]);
  }

  return 0;
}

//发现在main函数中的a[5] 也被改变了 说明数组名实际是指针