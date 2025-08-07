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
 void DisplayProduct(PNODE head)
{
    while (head != NULL)
    {
        int num = head->data;
        int product = 1;

        int temp = num;
        while (temp > 0)
        {
            int digit = temp % 10;
            product = product * digit;
            temp = temp / 10;
        }
        printf("Product of digits in %d is :%d\n", num, product);

        head = head->next;
    }
}

int main()
{
  PNODE head = NULL;
  int no = 0;
  int iret = 0;

  InsertFirst(&head, 54);
  InsertFirst(&head, 45);
  InsertFirst(&head, 33);
  InsertFirst(&head, 21);
  InsertFirst(&head, 11);
  Display(head);
 
  DisplayProduct(head);

  return 0;
}