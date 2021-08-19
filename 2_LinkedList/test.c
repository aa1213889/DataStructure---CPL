#include <stdio.h>
#include <string.h>

#define ListSize 100
typedef int DataType;
typedef struct
{
  DataType arr[ListSize]; //数组
  int length;
} SeqList; //顺序表的数据类型名

//在顺序表L中第i个位置之前插入一个新元素x
void InsertList(SeqList *L, int i, DataType x)
{
  if (i < 1 || i > L->length + 1) //判断i是否合法
  {
    printf("position error");
    return;
  }
  if (L->length >= ListSize) //判断L是否已经满了
  {
    printf("overflow");
    return;
  }
  int j;
  for (j = L->length - 1; j >= i - 1; j--)
  {
    L->arr[j + 1] = L->arr[j]; //从最后一个元素开始逐一后移
    L->arr[i - 1] = x;         //插入新元素x
    L->length++;               //L 的实际长度加一
  }
}

int main()
{
  SeqList *SL;

  // SL->arr[4] = {1, 5, 5, 6};

  // for (int i = 0; i < 4; i++)
  // {
  //   printf("%d ", arr[i]);
  // }
  return 0;
}