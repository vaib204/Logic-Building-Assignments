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
  PNODE newn = NULL;

  newn = (PNODE)malloc(sizeof(NODE));

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
int SearchLastOcc(PNODE head, int value)
{
  int count = 1;
  while (head != NULL)
  {
    if (head->data == value)
    {
      return count;
    }
    head = head->next;
    count++;
  }
  return -1;
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
  printf("\n");

  printf("Enter the element:\n");
  scanf("%d", &no);

  iret = SearchLastOcc(head, no);

  printf("output is :%d\n", iret);

  return 0;
}