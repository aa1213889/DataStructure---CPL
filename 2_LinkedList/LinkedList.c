#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef char DataType;
typedef struct node
{
  DataType data;
  struct node *next;
} ListNode;

typedef ListNode *LinkedList;
ListNode *p;
LinkedList head;

LinkedList CreateLinkedF()
{
  LinkedList head;
  ListNode *p;
  char ch;
  head = NULL;
  ch = getchar();
  while (ch != '\n')
  {
    p = (ListNode *)malloc(sizeof(ListNode));
    p->data = ch;
    p->next = head;
    head = p;
    ch = getchar();
  }
  return head;
}

int main()
{
  CreateLinkedF();
  return 0;
}