#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

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
  
bool IsNumberPalindrome(int num)
{
    int original = num;
    int reversed = 0;

    while (num > 0)
    {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}
void Palindrome(PNODE head)
{
  bool bFlag = TRUE;

  int num = head->data;

  while (head != NULL)
  {
    if(IsNumberPalindrome(head->data))
    {
      printf("%d is palindrome\n",head->data);
      bFlag = FALSE;
    }
   else
   {
     printf("%d is not palindrome\n",head->data);
   }
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

  
  Palindrome(head);

  return 0;
}