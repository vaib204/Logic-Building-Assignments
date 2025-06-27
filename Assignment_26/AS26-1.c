#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkChar(char *str, char ch)
{
  BOOL bflag = FALSE;
  while (*str != '\0')
  {
    if (*str == ch)
    {
      bflag = TRUE;
      break;
    }
    str++;
  }
  return bflag;
}

int main()
{
  char arr[20];
  char cvalue = '\0';
  BOOL bret = FALSE;

  printf("Enter String:");
  scanf("%[^'\n]s", arr);

  printf("Enter the charachter:");
  scanf(" %c", &cvalue);

  bret = ChkChar(arr, cvalue);

  if (bret == TRUE)
  {
    printf("charchter found");
  }
  else
  {
    printf("charchter not found");
  }
  return 0;
}
