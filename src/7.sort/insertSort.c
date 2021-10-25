#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* 插入排序*/
  int num[5] = {3, 7, 1, 8, 5};
  int pos, cur;
  int i;
  int length = sizeof(num) / sizeof(num[0]);

  for (i = 1; i < length; i++)
  {
    pos = i - 1;  //有序序列的最后一个元素位置
    cur = num[i]; //保存待排序元素的值
    while (pos >= 0 && num[pos] > cur)
    {
      num[pos + 1] = num[pos];
      pos--;
    }
    num[pos + 1] = cur; //将待排序元素插入数组中
  }
  return 0;
}