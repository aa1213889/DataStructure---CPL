#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node
{
  char data;
  struct Node *next;
} node;

typedef node *LinkedList;
node *p;
LinkedList head;

LinkedList CreateLinkedF()
{
  LinkedList head;
  node *p;
  char ch;
  head = NULL;
  ch = getchar();
  while (ch != '\n')
  {
    p = (node *)malloc(sizeof(node));
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