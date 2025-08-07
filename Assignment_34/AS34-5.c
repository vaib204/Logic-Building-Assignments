#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

struct node
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void InsertFirst(PPNODE first, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));

  newn->data = no;
  newn->next = NULL;

  if (*first == NULL)
  {
    *first = newn;
  }
  else
  {
    newn->next = *first;
    *first = newn;
  }
}

void Display(PNODE first)
{
  while (first != NULL)
  {
    printf("| %d |->", first->data);
    first = first->next;
  }
  printf("NULL\n");
}

int Count(PNODE first)
{
  int iCount = 0;

  while (first != NULL)
  {
    iCount++;
    first = first->next;
  }
  return iCount;
}

int Minimum(PNODE head)
{
  int min = head->data;

  while (head != NULL)
  {
    if (head->data < min)
    {
      min = head->data;
    }
    head = head->next;
  }
  return min;
}

int main()
{
  PNODE head = NULL;
  int no = 0;
  int iret = 0;

  InsertFirst(&head, 50);
  InsertFirst(&head, 40);
  InsertFirst(&head, 30);
  InsertFirst(&head, 20);
  InsertFirst(&head, 10);

  Display(head);

  iret = Minimum(head);

  printf("minimum is:%d", iret);

  return 0;
}